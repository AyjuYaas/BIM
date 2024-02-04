#include<stdio.h>

struct s_intrest{
    float pr;
    float rate;
    struct{
        int m, y, d;
    }time;
}si;

int main(){
    float intrest, t;
    printf("\nEnter principle: ");
    scanf("%f", &si.pr);
    printf("Enter rate: ");
    scanf("%f", &si.rate);
    printf("Enter Time:\n");
    printf("Year: ");
    scanf("%d", &si.time.y);
    printf("Months: ");
    scanf("%d", &si.time.m);
    printf("Days: ");
    scanf("%d", &si.time.d);
    
    t = ((float)si.time.d/365.0) + ((float)si.time.m/12.0) + (float)si.time.y;

    intrest = (si.pr*t*si.rate)/100.0;

    printf("\nThe Simple Intrest is: %.2f", intrest);

    return 0;    
}   