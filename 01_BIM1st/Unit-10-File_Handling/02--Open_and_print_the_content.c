/* Open and read the previously opened file and print it's Content */

#include<stdio.h>
#include<stdlib.h>

int main(){

    char s[100];

    FILE *fp;
    fp = fopen("01--readme.txt", "r");
    fgets(s, 50, fp);
    fclose(fp);

    printf("\nThe FIle Has Been Accessed; It's Contents:\n");
    printf("%s", s);

    return 0;
}