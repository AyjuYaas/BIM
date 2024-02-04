/* Read the txt file named "student" created in question 9 using fscanf function and display all
the details in the console. */

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
    FILE *fp = fopen("student.txt", "r");
    if (fp == NULL){
        printf("Error Creating File");
        exit(1);
    }
    fscanf(fp, "%d\n%[^\n]\n%[^\n]\n%c\n%[^\n]", &st.roll, &st.name, &st.faculty, &st.gender, &st.address);
    printf("\nRead Successfully\n");
    fclose(fp);

    printf("\nThe Details:\n");
    printf("Roll no: %d", st.roll);
    printf("\nName: %s", st.name);
    printf("\nFaculty: %s", st.faculty);
    printf("\nGender: %c", st.gender);
    printf("\nAddress: %s", st.address);

    return 0;
}