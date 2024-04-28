// Lab 12 : WAP in C to implement SSTF Disk Scheduling algorithm.

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// Function to find the request with the minimum seek time from the current head
// position
int findMinSeekTime(int *queue, int head, int size, int *visited) {
    int minSeekTime = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < size; i++) {
        if (!visited[i] && abs(queue[i] - head) < minSeekTime) {
            minSeekTime = abs(queue[i] - head);
            minIndex = i;
        }
    }

    return minIndex;
}

// Function to calculate total seek time
int calculateSeekTime(int *queue, int head, int size) {
    int seekTime = 0;
    int visited[size];

    for (int i = 0; i < size; i++) visited[i] = 0;

    for (int i = 0; i < size; i++) {
        int minIndex = findMinSeekTime(queue, head, size, visited);
        visited[minIndex] = 1;
        seekTime += abs(queue[minIndex] - head);
        head = queue[minIndex];
        printf("->%d", head);
    }

    return seekTime;
}

int main() {
    int size, head;

    printf("Enter the number of requests: ");
    scanf("%d", &size);

    int queue[size];

    printf("Enter the request queue:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &queue[i]);
    }

    printf("Enter the initial head position: ");
    scanf("%d", &head);

    printf("\n%d", head);
    int totalSeekTime = calculateSeekTime(queue, head, size);

    printf("\nTotal seek time using SSTF: %d\n", totalSeekTime);

    return 0;
}
