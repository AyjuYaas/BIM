//Write a program to move all the consonant characters in a file to another file.

#include<stdio.h>
#include<stdlib.h>

int main(){
    char c;
    FILE *fp, *co;

    fp = fopen("greeting.txt", "r");
    co = fopen("consonant.txt", "w");

    if(fp == NULL || co == NULL){
        printf("Error in Opening the files");
        exit(0);
    }
    while((c=fgetc(fp)) != EOF){
        if((c!='A') && (c!='a') && (c!='E') && (c!='e') && (c!='I') && (c!='i') && (c!='O') && (c!='o') && (c!='U') && (c!='u')){
            fprintf(co, "%c ", c);
        }
    }

    printf("Succesfully Read and Written");
    fclose(fp);
    fclose(co);
    return 0;
}
