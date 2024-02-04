#include<stdio.h>
#include<math.h>

int armstrong_check(int);

int main(){
    
    int i, result;

    printf("The Armstrong Values From 100-300 are:\n");
    for(i=100; i<=500; i++){
        result = armstrong_check(i);
        if (result == 1){
            printf("%d ", i);
        }
    }

    return 0;
}

int armstrong_check(int a){

    int count = 0, n, rem, total = 0;
    n = a;
    int n1 = a;
    do{
        count++;
        n = n/10;
    }while(n != 0);

    do{
        rem = n1%10;
        total += pow(rem, count);
        n1 /= 10;    
    }while(n1 != 0);

    if(total == a){
        return 1;
    }

    else{
        return 0;
    }
    
}