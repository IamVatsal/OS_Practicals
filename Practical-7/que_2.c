#include <stdio.h>
int main() {
    int n, i;
    int bt[20], at[20], wt[20], tat[20], ct[20], pid[20], done[20];
    int completed = 0, current_time = 0;
    float avg_wt = 0, avg_tat = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter Burst Time:\n");
    for (i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
        pid[i] = i + 1;
        done[i] = 0;
    }

    printf("Enter Arrival Time:\n");
    for (i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        scanf("%d", &at[i]);
    }

    while (completed < n) {
        int idx = -1;
        for (i = 0; i < n; i++) {
            if (!done[i] && at[i] <= current_time) {
                if (idx == -1 || bt[i] < bt[idx] || (bt[i] == bt[idx] && at[i] < at[idx])) {
                    idx = i;
                }
            }
        }

        if (idx == -1) {
            current_time++;
            continue;
        }

        wt[idx] = current_time - at[idx];
        ct[idx] = current_time + bt[idx];
        tat[idx] = ct[idx] - at[idx];
        current_time = ct[idx];
        done[idx] = 1;
        completed++;
    }

    for (i = 0; i < n; i++) {
        avg_wt += wt[i];
        avg_tat += tat[i];
    }

    printf("\nProcess\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\n", pid[i], at[i], bt[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time = %.2f", avg_wt / n);
    printf("\nAverage Turnaround Time = %.2f\n", avg_tat / n);
    return 0;
}