#include<stdio.h>

int main(){

    int a, b, c;

    printf("\nEnter Three Numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b){
        if(a>c){
            printf("\n%d is greatest", a);
        }
    }
    else if (b>c){
        printf("\n%d is greatest", b);
    }
    else{
        printf("\n%d is greatest", c);
    }

    return 0;
}