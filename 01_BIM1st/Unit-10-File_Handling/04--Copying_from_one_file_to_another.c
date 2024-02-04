/* Copying the file from one file to another */

#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *fp = fopen("04--greetings.txt", "r"); //This file was created manually

    if(fp == NULL){
        printf("\nFile Not Created!!");
        exit(1);
    }
    printf("\nFile Found!!");
    char s[100];
    fgets(s, 50, fp);
    fclose(fp);

    FILE *wr = fopen("04--greetings_copied.txt", "w");
    if(wr==NULL){
        printf("Error In Creating File!!");
        exit(1);
    }
    
    fputs(s, fp);
    printf("\n\nContents Copied Successfully and can be found on 04--greetings_copied.txt\n.");
    fclose(wr);

    return 0;
}