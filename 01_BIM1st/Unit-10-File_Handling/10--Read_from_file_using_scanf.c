/* Display the content from previous file in the console using fscanf() */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int roll;
    char name[30];
    char faculty[10];
    char gender[9];
    char address[50];

    FILE *fp = fopen("09--student.txt", "r");
    if (fp == NULL){
        printf("Error in creation of file!!");
        exit(1);
    }

    fscanf(fp, "%d\n%[^\n]\n%s\n%s\n%[^\n]", &roll, &name, &faculty, &gender, &address);
    printf ("Roll: %d", roll);
    printf("\nName: %s", name);
    printf("\nFaculty: %s", faculty);
    printf("\nGender: %s", gender);
    printf("\nAddress: %s", address);
    
    return 0;
}