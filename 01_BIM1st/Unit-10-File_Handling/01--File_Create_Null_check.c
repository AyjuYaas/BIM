/* Create a file, check if the pointer is pointing at the file, and the write the context */

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("01--readme.txt", "w");

    if (fp == NULL){
        printf("File Cannot be Created\n");
        exit(1);
    }
    else{
        printf("The File has been created\n");
    }

    fputs("I love C Programming", fp);

    fclose(fp);

    return 0;
}