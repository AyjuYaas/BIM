#include<stdio.h>
#include<string.h>

int main(){

    char str[10];
    char rev[10];

    printf("Enter a String: ");
    scanf("%s%*c", str);

    strcpy(rev, str);
    strrev(rev);

    if (strcmp(rev, str) == 0){
        printf("It is Palindrome");
    }
    else{
        printf("It is Not Palindrome");
    }

    return 0;

}