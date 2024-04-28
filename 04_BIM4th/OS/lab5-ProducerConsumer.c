#include <stdio.h>
#include <stdlib.h>

int lock = 1, full = 0, empty = 5, data = 0;

void producer() {
    // decrementing the value of lock, producer is using the buffer
    --lock;

    // slot consumed is increased, empty slot is decreased, data is created
    ++full;
    --empty;
    data++;

    printf("\nProducer produces item number: %d\n", data);

    // Release Lock
    ++lock;
}

void consumer() {
    // decrementing the value of lock, consumer is using the buffer
    --lock;

    printf("\nConsumer consumes item number: %d.\n", data);

    // full slot is decreased, empty slot is increased, data is decreased
    --full;
    ++empty;
    data--;

    // release lock
    ++lock;
}

int main() {
    int n, i;
    printf(
        "\n1. Enter 1 for Producer"
        "\n2. Enter 2 for Consumer"
        "\n3. Enter 3 to Exit");

    while (0 < 1) {
        printf("\nEnter your choice: ");
        scanf("%d", &n);

        // using switch case as there can be multiple types of choice.
        switch (n) {
            case 1:
                /*
                If the value of lock is 1 and the buffer is not full, then we
                can produce the data
                */
                if ((lock == 1) && (empty != 0))
                    producer();
                else
                    printf("The Buffer is full. New data cannot be produced!");

                break;

            case 2:
                /*
                If the value of lock is 1 and the buffer is not empty, then we
                can consume the data
                */
                if ((lock == 1) && (full != 0))
                    consumer();
                else
                    printf("The Buffer is empty! New data cannot be consumed!");

                break;

            case 3:
                exit(0);
                break;

            default:
                printf("!!Value mismatch!!");
        }
    }
}
