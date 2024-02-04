//Write a program to display the size of the file named "greeting.txt".

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp = fopen("greeting.txt", "r");
    if(fp==NULL){
        printf("Error Opening File");
        exit(1);
    }

    fseek(fp, 0, 2);
    printf("\nThe Size of the file = %d bytes", ftell(fp));

    fclose(fp);
    return 0;
}