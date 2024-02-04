#include<stdio.h>
void calculations(int, int);

int main(){
    int x, y;
    printf("\nEnter Two Numbers:\n");
    scanf("%d %d", &x, &y);
        
    calculations(x, y);
    return 0;

}

void calculations(int a, int b){
    printf("\nSum = %d", a+b);
    printf("\nDifference = %d", a-b);
    printf("\nProduct = %d", a*b);
    printf("\nDIvide = %.2f", (float)a/(float)b);
}