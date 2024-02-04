#include<stdio.h>

int main(){

    float a, b;
    int choice;

    printf("\nEnter Two Numbers: ");
    scanf("%f %f", &a, &b);

    printf("\nPress\n1 - Add\n2 - Subtract\n3 - Multiply\n4 - Divide");
    printf("\nchoose: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("\nSum = %.2f", a+b);
        break;

        case 2:
        printf("\nDifference = %.2f", a-b);
        break;

        case 3:
        printf("\nProduct = %.2f", a*b);
        break;

        case 4:
        printf("\nQuotient = %.2f", a/b);
        break;

        default:
        printf("\nWrong Value");
    }

    return 0;
}