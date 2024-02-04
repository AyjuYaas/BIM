/* Problem of overflow string */

#include<stdio.h>
int main(){

    char a[5];
    printf("\nOnly Stores 5 characters, but try entering more than 5 characters");
    printf("\nEnter the string: ");
    gets(a);

    printf("The String: %s", a);
    printf("\nShows all the entered string, This is Overflow caused by gets");

    return 0;
}