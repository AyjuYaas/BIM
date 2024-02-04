/* String Concatenation */

#include<stdio.h>
#include<string.h>

int main(){
    char a[100], b[100];

    printf("\nEnter a String: ");
    scanf("%s", a);
    printf("Enter the string to be concatinated: ");
    scanf("%s", b);

    strcat(a, b);
    printf("The Concatenated String: %s", a);

    return 0;
}