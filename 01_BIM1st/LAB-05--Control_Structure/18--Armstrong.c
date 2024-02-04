#include<stdio.h>
#include<math.h>

int main(){

    int a, count = 0, arm = 0, rem; 

    printf("\nEnter a number: ");
    scanf("%d", &a);

    int n1 = a;
    int n2 = a;

    while (n1 != 0){
        n1 = n1/10;
        count++;
    }
    while(n2 != 0){
        rem = n2%10;
        arm = arm+pow(rem, count);
        n2 = n2/10;
    }

    if(arm == a){
        printf("It is an Armstrong Number");
    }
    else{
        printf("It is Not an Armstrong Number");
    }

    return 0;
}