#include<stdio.h>

void si(float, float, float);

int main(){

    float p, t, r;

    printf("Enter the Principle Amount: ");
    scanf("%f", &p);
    printf("Enter the Time(in years): ");
    scanf("%f", &t);
    printf("Enter the Rate: ");
    scanf("%f", &r);

    si(p, t, r);

    return 0;
}

void si (float p, float t, float r){

    float si = ((p*t*r)/100.0);

    printf("\nThe Simple Intrest = %.3f", si);

}