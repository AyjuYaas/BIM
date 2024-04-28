// Lab 8 : WAP in C to implement Optimal Page Replacement(OPR) algorithm.

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
                break;
            }
        }
        pagefault++;

        if (flag == 0 && i < frames)  // Frame bhanda kam xa bhaney, next frame
                                      // mai data janxa
            temp[i] = words[i];

        else if (flag == 0) {
            int sum = 0, m, n, inflag[frames],
                count = 0;  // sum le sums up the frame number,
                            // inflag le tests if same number aauxa or not

            for (m = i + 1; m < totalPages;
                 m++) {  // Hit gareko bhanda 1 step aagadi dekhi start checking
                for (n = 0; n < frames; n++) {  // Frames ma check

                    // if frame ma bhako word sanga equal xa ra unique xa bhaney
                    if (temp[n] == words[m] && inflag[n] != 101) {
                        sum += n;
                        count++;
                        inflag[n] = 101;
                    }
                }
                if (count == 2) break;  // duita le hit garyo bhaney done
            }

            // eg. if 0 and 2 hit then sum = 2, 3-2 = 1, which che is at last
            // and should be replaced
            if ((3 - sum) <= 3)
                temp[(3 - sum)] = words[i];
            else  // Else replacement using FIFO
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