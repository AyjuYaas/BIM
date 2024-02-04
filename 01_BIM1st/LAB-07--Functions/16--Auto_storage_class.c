#include<stdio.h>

int main(){

    int a = 3;

    printf("\nDifferenet Values of same variable on different blocks:\n");
    printf ("Initially a = %d\n", a);

    printf("Inside blocks Value:\n");
    {
        auto int a = 4;{
            auto int a = 5;
            printf ("a = %d\n", a);                                                     
        }
        printf("a = %d\n", a);
    }

    printf("Again, Outside block\n");
    printf("a = %d\n", a);
    return 0;
}