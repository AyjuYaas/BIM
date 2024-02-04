#include<stdio.h>

struct interest{
    float principal;

    struct{
        float year;
        float month;
        float day;

    }time;
float rate;
};

int main(){
    struct interest amt;

    amt.principal = 10000.0;
    amt.rate = 12.0;

    amt.time.year = 2.0;
    amt.time.month = 10.0;
    amt.time.day = 13.0;

    float totalyear = amt.time.year + (amt.time.month/12.0) + (amt.time.day/365);
    float interest;

    interest = (amt.principal * totalyear * amt.rate)/100;

    printf("%f", interest);
    return 0;
}
