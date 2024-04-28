#include <stdio.h>

int main() {
    int proNo = 5;  // Process Number
    int resNo = 3;  // Resource Number

    // Allocation Matrix
    int allocation[5][3] = {
        {0, 1, 0}, {2, 0, 0}, {3, 0, 2}, {2, 1, 1}, {0, 0, 2},
    };

    // Max Matrix
    int max[5][3] = {
        {7, 5, 3}, {3, 2, 2}, {9, 0, 2}, {2, 2, 2}, {4, 3, 3},
    };

    int available[3] = {3, 3, 2};

    int needed[proNo][resNo];

    for (int i = 0; i < proNo; i++) {
        for (int j = 0; j < resNo; j++) {
            needed[i][j] = max[i][j] - allocation[i][j];
        }
    }

    int y, count = 0;
    int flag[5] = {0, 0, 0, 0, 0};

    do {
        y = 0;
        for (int i = 0; i < proNo; i++) {
            if (needed[i][0] <= available[0] && needed[i][1] <= available[1] &&
                needed[i][2] <= available[2] && flag[i] == 0) {
                printf("P[%d] -> ", i);
                available[0] += needed[i][0];
                available[1] += needed[i][1];
                available[2] += needed[i][2];
                flag[i] = 1;
                count++;
                y = 1;
            }
        }
    } while (y == 1);

    if (count == proNo)
        printf("\nSystem is Safe");
    else
        printf("\nSystem is not Safe");
    return 0;
}