#include<stdio.h>
int main(){
    int *p = 0;

    if(p == NULL){
        printf("Null Pointer");
    }
    else{
        printf("Pointing to some value i.e. %d", p);
    }

    return 0;

}