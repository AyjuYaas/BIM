#include<stdio.h>
#include<string.h>

int main(){

    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%[^\n]%*c", str1);
    printf("Enter the Second string: ");
    scanf("%[^\n]%*c", str2);

    if(strcmp(str1, str2) == 0){
        printf("They are the same string");
    }

    else{
        printf("They are different strings");
    }

    return 0;
}