// Lab 3 : WAP in C to implement Round Robin Scheduling algorithm.

#include <stdio.h>

int main() {
    int i, noOfProcess, quantum, sum = 0, count = 0, wt = 0, tat = 0;
    float avg_wt, avg_tat;

    printf("Enter the total Number of Process: ");
    scanf("%d", &noOfProcess);

    int y = noOfProcess, at[noOfProcess], bt[noOfProcess], temp[noOfProcess];

    for (i = 0; i < noOfProcess; i++) {
        printf("\nEnter the Arrival and Burst Time of the process[%d]: ",
               i + 1);
        printf("\nArrival Time: ");
        scanf("%d", &at[i]);
        printf("Burst Time: ");
        scanf("%d", &bt[i]);
        temp[i] = bt[i];
    }

    printf("\nEnter the time Quantum: ");
    scanf("%d", &quantum);

    i = 0;
    printf("\nProcessNo. \t BurstTime \t TAT \t WaitingTime");
    while (y != 0) {
        if (temp[i] <= quantum && temp[i] > 0) {
            sum += temp[i];
            temp[i] = 0;
            count = 1;
        } else if (temp[i] > 0) {
            temp[i] = temp[i] - quantum;
            sum = sum + quantum;
        }

        if (temp[i] == 0 && count == 1) {
            y--;
            printf("\nP[%d] \t\t %d \t\t %d \t\t %d", i + 1, bt[i],
                   (sum - at[i]), (sum - bt[i] - at[i]));
            wt += (sum - at[i] - bt[i]);
            tat += sum - at[i];
            count = 0;
        }

        if (i == noOfProcess - 1)
            i = 0;
        else if (at[i + 1] <= sum)
            i++;
        else
            i = 0;
    }

    avg_wt = wt / noOfProcess * 1.0;
    avg_tat = tat / noOfProcess * 1.0;

    printf("\nAverage waiting Time: %f", avg_wt);
    printf("\nAverage Turn Around Time: %f", avg_tat);

    return 0;
}