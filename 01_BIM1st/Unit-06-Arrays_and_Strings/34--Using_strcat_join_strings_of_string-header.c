#include<stdio.h>
#include<string.h>

int main(){
    char str1[100], str2[100];

    printf("Enter String 1: ");
    scanf("%[^\n]%*c", str1);

    printf("ENter String 2: ");
    scanf("%[^\n]%*c", str2);

    strcat(str1, str2); //Joins str2 in the end of str1

    printf("Combined String is:\n");
    printf("%s", str1);

    return 0;
}