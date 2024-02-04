#include<stdio.h>

int main(){

    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Your string is: %s", str);

    return 0;
}