#include<stdio.h>
#include<string.h>

int main(){
    
    char str[11] = "Hello";
    char str1[6] = "World";
    printf("Before Copying: %s", str);
    strcpy(str, str1);

    printf("\nAfter Copying: %s", str);
    return 0;
}