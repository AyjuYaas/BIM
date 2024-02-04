#include<stdio.h>
#include<string.h>

int main(){

    char str[10] = "BIM First";
    int len;

    len = strlen(str);

    printf("Length of %s is %d", str, len);

    /** Using fgets() **/

    printf("\nThe String: ");
    fgets(str, 10, stdin);

    len = strlen(str);

    printf("Length of %s is %d", str, len);

    return 0;
}