/* User Names The file */

#include<stdio.h>
#include<stdlib.h>

int main(){
    char file_name[100];
    printf("Enter the File Name: ");
    gets(file_name);

    FILE *fp = fopen(file_name, "w");

    if(fp == NULL){
        printf("Error in creating a file!!");
        exit(1);
    }

    char a;
    printf("\nEnter the context to be written on the file: ");
    while((a = getchar()) != '\n'){
        fputc(a, fp);
    }

    fclose(fp);
    printf("The File has been succesfully Created and Written");

    return 0;
}