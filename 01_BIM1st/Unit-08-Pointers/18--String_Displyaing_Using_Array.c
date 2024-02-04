#include<stdio.h>

int main(){
    char *str = "BIM";
    int i;

    for(i=0; i<3; i++){
        printf("String str+%d is %s\n", i, str+i);
    }

    return 0;
}