//In binary mode, modify the file "student list.dat" created in question 13.
#include<stdio.h>
#include<stdlib.h>
struct s_details{
    int roll;
    char name[20];
    char faculty[10];
    char gender;
    char address[30];
}st[3];

int main(){
    FILE *fp = fopen("student list.dat", "rb+");
    if (fp == NULL){
        printf("Error Creating File");
        exit(1);
    }
    fread(&st, sizeof(st), 3, fp);
    printf("\nRead Succesfully!");

    printf("\nBefore Modifying:\n");
    int i;
    for(i=0; i<3; i++){
        printf("\nThe Detail of student %d:\n", i+1);
        printf("Roll no: %d", st[i].roll);
        printf("\nName: %s", st[i].name);
        printf("\nFaculty: %s", st[i].faculty);
        printf("\nGender: %c", st[i].gender);
        printf("\nAddress: %s\n", st[i].address);
    }

    printf("\nUpdate on 2nd student:\n");
    printf("Updated Roll.: ");
    scanf("%d%*c", &st[1].roll);
    printf("Updated Address: ");
    scanf("%[^\n]", &st[1].address);

    fwrite(&st, sizeof(st), 3, fp);
    printf("\nUpdated!!");
    fclose(fp);

    printf("\nAfter Modifying:\n");
    for(i=0; i<3; i++){
        printf("\nThe Detail of student %d:\n", i+1);
        printf("Roll no: %d", st[i].roll);
        printf("\nName: %s", st[i].name);
        printf("\nFaculty: %s", st[i].faculty);
        printf("\nGender: %c", st[i].gender);
        printf("\nAddress: %s\n", st[i].address);
    }
    return 0;
}