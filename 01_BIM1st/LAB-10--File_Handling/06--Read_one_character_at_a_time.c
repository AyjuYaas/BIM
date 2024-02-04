/* Write a program to read one character at a time from a file named "greeting.txt" created in
question 5 and display the whole content of the file in the console.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp = fopen("greeting.txt", "r");
    char c;

    if(fp == NULL){
        printf("Error Creating File");
        exit(1);
    }

    printf("\nThe Content of the file are:\n");
    while ((c = fgetc(fp)) != EOF){
        putchar(c);
    }

    fclose(fp);
    return 0;
}