/* Copy using strcpy */

#include<stdio.h>
#include<string.h>

int main(){
    char a[100], b[100];

    printf("\nEnter a String: ");
    scanf("%[^\n]", a);

    strcpy(b, a);

    printf("After Copying, The String: %s", b);

    return 0;
}