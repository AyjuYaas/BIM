#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE* fp;
    fp=fopen("01--readme.txt","a");

    if (fp == NULL){
        printf("File cannot be appended\n");
        exit(1);
    }
    else{
        printf("The file has been successfully accessed for appending\n");
    }
    fputs(" very much",fp);
    fclose(fp);
    return 0;
}