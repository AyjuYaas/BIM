/* String Palindrome or Not */

#include<stdio.h>
#include<string.h>
int main(){

    char str[100], cmp[100];
    printf("\nEnetr a string: ");
    scanf("%[^\n]%*c", str);

    strupr(str);
    strcpy(cmp, str);
    strrev(cmp);
    
    if(strcmp(str, cmp) == 0){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }

    return 0;
}