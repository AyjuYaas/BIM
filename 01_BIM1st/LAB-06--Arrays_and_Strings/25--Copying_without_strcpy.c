/* Copy without using strcpy */

#include<stdio.h>
#include<string.h>

int main(){
    char a[100], b[100];

    printf("\nEnter a String: ");
    scanf("%[^\n]", a);

    int i, l = strlen(a);
    for(i=0; i<l; i++){
        b[i] = a[i];
    }

    printf("After Copying, The String: %s", b);

    return 0;
}