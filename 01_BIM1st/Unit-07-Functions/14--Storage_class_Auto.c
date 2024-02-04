#include<stdio.h>

int main(){

    int a = 3;
    int b = 4;

    {
        auto int a = 4;{
            auto int a = 5;
            printf ("%d ", a);                                                     
        }
        printf("%d ", a);
    }

    printf("%d ", a);
    printf("%d ", b);

    return 0;
}