#include<stdio.h>

int main(){

    float sp, cp;

    printf("\nEnter the Cost Price: ");
    scanf("%f", &cp);
    printf("Enter the Selling Price: ");
    scanf("%f", &sp);

    if ((sp-cp)>=0){
        printf("\nThere has been a profit");
    }
    else{
        printf("\nThere has been a loss");
    }

    return 0;
}