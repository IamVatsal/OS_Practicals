#include <stdio.h> 

int main() {
    // First Come First Serve (FCFS) Scheduling Algorithm
    int n, i;
    int bt[20], at[20], wt[20], tat[20], pid[20];
    int current_time, start_time;
    float avg_wt = 0, avg_tat = 0;
    printf("Enter number of processes: ");
    scanf("%d", &n); printf("Enter Burst Time:\n");
    for (i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
        pid[i] = i + 1;
    }

    printf("Enter Arrival Time:\n");
    for (i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        scanf("%d", &at[i]);
    }

    for (i = 0; i < n - 1; i++) {
        int j;
        for (j = 0; j < n - i - 1; j++) {
            if (at[j] > at[j + 1]) {
                int temp;
                temp = at[j];
                at[j] = at[j + 1];
                at[j + 1] = temp;

                temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;

                temp = pid[j];
                pid[j] = pid[j + 1];
                pid[j + 1] = temp;
            }
        }
    }

    current_time = 0;
    for (i = 0; i < n; i++) {
        start_time = (current_time > at[i]) ? current_time : at[i];
        wt[i] = start_time - at[i];
        tat[i] = wt[i] + bt[i];
        current_time = start_time + bt[i];
        avg_wt += wt[i];
        avg_tat += tat[i];
    }

    printf("\nProcess\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\n", pid[i], at[i], bt[i], wt[i], tat[i]);
    }
    printf("\nAverage Waiting Time = %.2f", avg_wt / n);
    printf("\nAverage Turnaround Time = %.2f", avg_tat / n);
    return 0;
}