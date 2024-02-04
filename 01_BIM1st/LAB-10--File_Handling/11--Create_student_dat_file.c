//Create a binary text file "student.dat" having the records of a student.

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
    
    printf("Enter the details of student:\n");
    printf("Roll no: ");
    scanf("%d%*c", &st.roll);
    printf("Name: ");
    scanf("%[^\n]%*c", st.name);
    printf("Faculty: ");
    scanf("%[^\n]%*c", st.faculty);
    printf("Gender (M/F/O): ");
    scanf("%c%*c", &st.gender);
    printf("Address: ");
    scanf("%[^\n]%*c", st.address);
    
    FILE *fp = fopen("student.dat", "wb");
    if(fp==NULL){
        printf("Error Creating File");
        exit(1);
    }
    fwrite(&st, sizeof(st), 1, fp);
    printf("\nWritten Successfully!");
    fclose(fp);
    return 0;
}