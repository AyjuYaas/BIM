// Lab 10: WAP to simulate following Contagious memory Allocation techniques:
// a) First Fit b) Best Fit c) Worst Fit

#include <stdio.h>

void first_fit(int* file, int* memory, int fileCount, int memCount) {
    int copyFile[fileCount], copyMemory[memCount];
    for (int i = 0; i < fileCount; i++) copyFile[i] = file[i];
    for (int i = 0; i < memCount; i++) copyMemory[i] = memory[i];

    int flag = 0;
    for (int i = 0; i < fileCount; i++) {
        flag = 0;
        for (int j = 0; j < memCount; j++) {
            if (copyFile[i] <= copyMemory[j]) {
                printf("\n%d goes in memory %d", copyFile[i], copyMemory[j]);
                copyMemory[j] = copyMemory[j] - copyFile[i];
                flag++;
                break;
            }
        }
        if (flag == 0) {
            printf("\n%d doesnot fit in any memory location", copyFile[i]);
        }
    }
}

void best_fit(int* file, int* memory, int fileCount, int memCount) {
    int copyFile[fileCount], copyMemory[memCount];
    for (int i = 0; i < fileCount; i++) copyFile[i] = file[i];
    for (int i = 0; i < memCount; i++) copyMemory[i] = memory[i];

    // Sort the Memory Locations
    for (int i = 0; i < memCount - 1; i++) {
        int small = i;
        for (int j = i + 1; j < memCount; j++) {
            if (copyMemory[j] < copyMemory[small]) small = j;
        }
        int temp = copyMemory[i];
        copyMemory[i] = copyMemory[small];
        copyMemory[small] = temp;
    }

    // Same as first fit
    first_fit(copyFile, copyMemory, fileCount, memCount);
}

void worst_fit(int* file, int* memory, int fileCount, int memCount) {
    int copyFile[fileCount], copyMemory[memCount];
    for (int i = 0; i < fileCount; i++) copyFile[i] = file[i];
    for (int i = 0; i < memCount; i++) copyMemory[i] = memory[i];

    // Sort the Memory Locations
    for (int i = 0; i < memCount - 1; i++) {
        int large = i;
        for (int j = i + 1; j < memCount; j++) {
            if (copyMemory[j] > copyMemory[large]) large = j;
        }
        int temp = copyMemory[i];
        copyMemory[i] = copyMemory[large];
        copyMemory[large] = temp;
    }

    // Same as first fit
    first_fit(copyFile, copyMemory, fileCount, memCount);
}

int main() {
    int file[] = {212, 417, 112, 426};
    int memory[] = {100, 500, 200, 300, 600};

    int fileCount = sizeof(file) / sizeof(file[0]);
    int memCount = sizeof(memory) / sizeof(memory[0]);

    printf("\nUsing First Fit");
    first_fit(file, memory, fileCount, memCount);

    printf("\n\nUsing Best Fit");
    best_fit(file, memory, fileCount, memCount);

    printf("\n\nUsing Worst Fit");
    worst_fit(file, memory, fileCount, memCount);

    return 0;
}