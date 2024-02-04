#include<stdio.h>
int series(int);

int main(){
    int n, count = 0, a = 0, sum = 0;
    printf("\nEnter the number of terms in sequence: ");
    scanf("%d", &n);

    do{
        printf("%d ", series(a));
        a++;
        count++;
    } while(count != n);

    return 0;
}

int series(int x){
    if (x==0){
        return 0;
    }
    else if(x==1){
        return 1;
    }
    else{
        return (series(x-1) + series(x-2));
    }
}