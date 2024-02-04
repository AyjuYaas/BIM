#include<stdio.h>

int main(){

    int a, rem, rev = 0;

    printf("\nEnter a number: ");
    scanf("%d", &a);
    int check = a;

    while (a != 0){
        rem = a%10;
        rev = rev*10 + rem;
        a = a/10;
    }

    if(check == rev){
        printf("\nIt is Palindrome");
    }
    else{
        printf("\nIt is Not Palindrome");
    }

    return 0;
    
}