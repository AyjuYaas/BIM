/* Display the context of previous file using character */

#include<stdio.h>
#include<stdlib.h>

int main(){
    char a;
    FILE *fp;
    fp = fopen("05--greetings.txt", "r");

    if(fp == NULL){
        printf("Error!!");
        exit(1);
    }

    puts("\nThe Context of the file is:");
    while ((a = fgetc(fp)) != EOF){
        putchar(a);
    }

    fclose(fp);

    return 0;
}