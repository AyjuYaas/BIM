#include<stdio.h>
void calculations();

int main(){
    
    calculations();
    return 0;

}

void calculations(){
    int a, b;
    printf("\nEnter Two Numbers:\n");
    scanf("%d %d", &a, &b);
    
    printf("\nSum = %d", a+b);
    printf("\nDifference = %d", a-b);
    printf("\nProduct = %d", a*b);
    printf("\nQuotient = %.2f", (float)a/(float)b);
}