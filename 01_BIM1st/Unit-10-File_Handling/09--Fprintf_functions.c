/* "student.txt" file create to enter name, roll, facul, gen, add of 1 student using fprintf() function */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int roll;
    char name[30];
    char faculty[10];
    char gender[9];
    char address[50];

    FILE *fp = fopen("09--student.txt", "w");
    if (fp == NULL){
        printf("Error in creation of file!!");
        exit(1);
    }

    printf("\nEnter the Details:\n");
    printf("Roll No: ");
    scanf("%d", &roll);
    fflush(stdin);

    printf("Name: ");
    gets(name);
    fflush(stdin);

    printf("Faculty: ");
    scanf("%s", faculty);
    fflush(stdin);

    printf("Gender: ");
    scanf("%s", gender);
    fflush(stdin);

    printf("Address: ");
    gets(address);
    fflush(stdin);

    fprintf(fp, "%d\n%s\n%s\n%s\n%s", roll, name, faculty, gender, address);

    printf("Successful!!");
    fclose(fp);

    return 0;

}