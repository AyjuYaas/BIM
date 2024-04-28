// Lab 7: WAP in C to implement FIFO Page Replacement (FIFO) algorithm.

#include <stdio.h>

int main() {
    int words[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 1, 2, 0, 1, 7, 0, 1};
    int totalPages = sizeof(words) / sizeof(words[0]);
    int frames = 3;
    int pagefault = 0;

    printf("Incoming \t Frame 1 \t Frame 2 \t Frame 3");
    int temp[frames];

    for (int i = 0; i < frames; i++) temp[i] = -1;

    for (int i = 0; i < totalPages; i++) {
        int flag = 0;

        for (int j = 0; j < frames; j++) {
            if (words[i] == temp[j]) {
                flag = 1;
                pagefault--;
            }
        }
        pagefault++;

        if (flag == 0) {
            temp[(pagefault - 1) % frames] = words[i];
        }
        printf("\n %d \t\t", words[i]);
        for (int k = 0; k < frames; k++) {
            if (temp[k] == -1)
                printf(" - \t\t ");
            else
                printf(" %d \t\t ", temp[k]);
        }
    }

    printf("\n\nTotal Page Fault = %d", pagefault);
    return 0;
}