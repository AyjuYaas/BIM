//Write a program to open a file named by the user and append some words in it.

#include<stdio.h>
#include<stdlib.h>

int main(){
    char fname[30], c;
    printf("\nEnter the file name to be searched: ");
    gets(fname);
    fflush(stdin);

    FILE *fp = fopen(fname, "a");
    if (fp==NULL){
        printf("Error Finding File");
        exit(1);
    }

    printf("\nFile Found!");
    printf("\nEnter the string to br appended: ");
    while ((c=getchar())!='\n'){
        fputc(c, fp);
    }

    printf("Succesfully Appended");
    fclose(fp);
    return 0;
}