/* Two Strings are same or not */
#include<stdio.h>
#include<string.h>

int main(){
    char a[100], b[100];

    printf("\nEnter a string: ");
    scanf("%[^\n]%*c", a);
    printf("Enter another string: ");
    scanf("%[^\n]%*c", b);

    if (strcmp(a, b) == 0){
        printf("\nThey are the same string");
    }
    else{
        printf("\nThey are different strings");
    }

    return 0;
}