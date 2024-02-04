/* Revarsal of a string */
#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    printf("\nEnter a String: ");
    scanf("%s", a);

    printf("The reverse of the string is: %s", strrev(a));

    return 0;
}