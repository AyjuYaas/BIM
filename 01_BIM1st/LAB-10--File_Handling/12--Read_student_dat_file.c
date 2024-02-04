//Read the binary text file "student.dat" created in question 11 having the records of a student.
#include<stdio.h>
#include<stdlib.h>
struct s_details{
    int roll;
    char name[20];
    char faculty[10];
    char gender;
    char address[30];
}st;

int main(){
    FILE *fp = fopen("student.dat", "rb");
    if (fp == NULL){
        printf("Error Creating File");
        exit(1);
    }

    fread(&st, sizeof(st), 1, fp);
    printf("\nRead Succesfully!");
    fclose(fp);

    printf("\nThe Details:\n");
    printf("Roll no: %d", st.roll);
    printf("\nName: %s", st.name);
    printf("\nFaculty: %s", st.faculty);
    printf("\nGender: %c", st.gender);
    printf("\nAddress: %s", st.address);

    return 0;
}
