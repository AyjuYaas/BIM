#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp = fopen("programming.txt", "r");
    char str[100];

    if(fp == NULL){
        printf("error opening file");
        exit(1);
    }
    else{
        fgets(str, 100, fp);
        printf("\nFile opened and read");
        fclose(fp);
    }

    FILE *f = fopen("copied.txt", "w");
    if (f==NULL){
        printf("Error Creating File");
        exit(2);
    }
    else{
        fputs(str, f);
        printf("\nFile Created and copied");
    }
    fclose(f);
    return 0;
}