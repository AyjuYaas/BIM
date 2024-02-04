/* Solve the overflow of the String */

#include<stdio.h>
int main(){

    char a[5];
    printf("\nOnly Stores 5 characters, but try entering more than 5 characters");
    printf("\nEnter the string: ");
    fgets(a, 5, stdin);

    printf("The String: %s", a);
    printf("\nOnly Shows 5 Characters. Solved the Overflow using fgets");

    return 0;
}