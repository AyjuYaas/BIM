//Read the binary text file "student list.dat" created in question 13 having the records of three
//students

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
    FILE *fp = fopen("student list.dat", "rb");
    if (fp == NULL){
        printf("Error Creating File");
        exit(1);
    }
    fread(&st, sizeof(st), 3, fp);
    printf("\nRead Succesfully!");
    fclose(fp);

    int i;
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