#include<stdio.h>

void element(int x[]);
int element_sum(int x[]);

int main(){

    int x[3], a, sum;

    for(a=0; a<3; a++){
        printf("Enter the value for x[%d]", a);
        scanf("%d", &x[a]);
    }   

    element(x);
    
    printf("\nSum is %d", element_sum(x));
 
    return 0;
}

void element(int p[]){

    int j;

    printf("The Elements are\n");
    for(j=0; j<3; j++){
        printf("%d ", p[j]);
    }

}

int element_sum(int p[]){

    int sum = 0, j;

    for(j=0; j<3; j++){
        sum += p[j];
    }

    return sum;

}

