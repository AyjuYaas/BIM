#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    char str1[101];

    printf("Problem:\n");
    printf("Enter two strings:\n");
    printf("Using Scanf: ");
    scanf("%[^\n]", str);
    printf("\nUsing gets: ");
    gets(str1);

    printf("\nNo Input for Gets (Problem)");

    /** Soln 1 **/
    /** Writing scanf/Gets before scanf **/
    printf("\n\nsoln 1");
    printf("\nUsing gets: ");
    gets(str1);
    printf("\nUsing Scanf: ");
    scanf("%[^\n]", str);

    /** Soln 2 **/
    gets(stdin);
    /** Use gets(stdin) after scanf to eat the new line **/
    printf("\n\nsoln 2");
    printf("\nUsing Scanf: ");
    scanf("%[^\n]", str);
    gets(stdin);
    printf("\nUsing gets: ");
    gets(str1);

    /** Soln 3 **/
    /** Using %*c in scanf **/
    printf("\n\nSoln 3");
    printf("\nUsing Scanf: ");
    scanf("%[^\n]%*c", str);
    printf("\nUsing gets: ");
    gets(str1);

    /** END **/
    return 0;

}