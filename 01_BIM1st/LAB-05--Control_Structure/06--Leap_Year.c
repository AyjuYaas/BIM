#include<stdio.h>

int main(){

    int year;

    printf("\nEnter a Year: ");
    scanf("%d", &year);

    if ((year%4) == 0){

        if((year%100) == 0){
           
            if((year%400) == 0){
                printf("Is a Leap Year");
            }
            else{
                printf("Not a Leap Year");
            }

        }
        else{
            printf("Is a Leap Year");
        }

    }
    else{
        printf("Not a Leap Year");
    }

    return 0;
}