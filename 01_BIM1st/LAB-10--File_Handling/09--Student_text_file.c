/* Create a txt file named "student" which contains roll no., name, faculty, gender, address
using fprintf function. */
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

    FILE *fp = fopen("student.txt", "w");
    if(fp==NULL){
        printf("Error Creating File");
        exit(1);
    }
    fprintf(fp, "%d\n%s\n%s\n%c\n%s", st.roll, st.name, st.faculty, st.gender, st.address);
    printf("Written Sucessfully");
    fclose(fp);
    return 0;
}