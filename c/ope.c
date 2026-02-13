#include <stdio.h>

int main() {
    int n, tq;
    int bt[10], rt[10], wt[10], tat[10];
    int time = 0, completed = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter burst time of processes: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
        rt[i] = bt[i];   
        wt[i] = 0;
    }

    printf("Enter time quantum: ");
    scanf("%d", &tq);

    while(completed < n) {
        for(int i = 0; i < n; i++) {
            if(rt[i] > 0) {
                if(rt[i] > tq) {
                    time += tq;
                    rt[i] -= tq;
                } else {
                    time += rt[i];
                    wt[i] = time - bt[i];
                    rt[i] = 0;
                    completed++;
                }
            }
        }
    }

    for(int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
    }

    printf("\nProcess\tBT\tWT\tTAT\n");
    for(int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\n", i+1, bt[i], wt[i], tat[i]);
    }

    return 0;
}