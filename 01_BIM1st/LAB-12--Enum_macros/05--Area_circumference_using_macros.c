#include<stdio.h>
#include<math.h>
#define pi 3.145

int main(){
    float r, a, c;
    printf("\nEnter the radius: ");
    scanf("%f", &r);

    a = pi*pow(r, 2);
    c = 2*pi*r;

    printf("\nArea = %.2f\nCircumference = %.2f", a, c);
    return 0;
}