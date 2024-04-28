// Lab 4 : WAP in C to implement Shortest Job First(SJF) algorithm.

#include <stdio.h>

int main() {
    int i, noOfProcess, sum = 0, count = 0, wt = 0, tat = 0, small, smallIndex,
                        sat = 0;
    float avg_wt, avg_tat;

    printf("Enter the total Number of Process: ");
    scanf("%d", &noOfProcess);

    int y = noOfProcess, bt[noOfProcess], at[noOfProcess], temp[noOfProcess];

    for (i = 0; i < noOfProcess; i++) {
        printf("Enter the Burst Time of the process[%d]: ", i + 1);
        scanf("%d", &bt[i]);
        at[i] = i;
        temp[i] = bt[i];
    }

    printf("\nProcessNo. \t BurstTime \t TAT \t WaitingTime");
    while (y != 0) {
        small = 9999;
        for (i = 0; i < noOfProcess; i++) {
            if (bt[i] < small && at[i] <= sat) {
                small = bt[i];
                smallIndex = i;
            }
        }
        sum += bt[smallIndex];
        tat += sum - smallIndex;
        wt += sum - bt[smallIndex] - smallIndex;

        printf("\nP[%d] \t\t %d \t\t %d \t %d", smallIndex + 1, bt[smallIndex],
               (sum - smallIndex), (sum - bt[smallIndex] - smallIndex));

        bt[smallIndex] = 99999;
        sat += bt[smallIndex];
        y--;
    }

    avg_wt = wt / noOfProcess * 1.0;
    avg_tat = tat / noOfProcess * 1.0;

    printf("\nAverage waiting Time: %f", avg_wt);
    printf("\nAverage Turn Around Time: %f", avg_tat);

    return 0;
}