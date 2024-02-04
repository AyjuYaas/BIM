/* Take Character until lower case is encountered */

#include<stdio.h>
int main(){

    char a[100];

    printf("\nThis Program Stops Reading String after Lower Case\n");
    printf("Enter the String: ");
    scanf("%[A-Z]", a);

    printf("\nYour String: %s", a);

    return 0;
}