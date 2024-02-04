#include<stdio.h>

int main(){

    char str[100];

    printf("ENter all uppercase Dstring: ");
    scanf("%[A-Z]", str);

    printf("Your Srting: %s", str);
    return 0;
}