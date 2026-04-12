#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, head, i;

    printf("Enter number of requests: ");
    scanf("%d", &n);

    int req[n];

    printf("Enter disk requests: ");
    for (i = 0; i < n; i++){
        scanf("%d", &req[i]);
    }

    printf("Enter initial head position: ");
    scanf("%d", &head);

    int total_seek = 0;

    for (i = 0; i < n; i++) {
        int distance = abs(req[i] - head);
        total_seek += distance;

        printf("Move from %d to %d (Seek = %d)\n", head, req[i], distance);
        head = req[i];
    }

    printf("Total Seek Time = %d\n", total_seek);

    return 0;
}