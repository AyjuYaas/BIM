/* Create a txt file named "student record" which contains structure called student whose
members are roll no.,name, faculty,gender and use this to store records for 3 students in a file
using fprintf function and display from a file using fscanf function. */

#include<stdio.h>
#include<stdlib.h>

struct s_details{
    int roll;
    char name[20];
    char faculty[10];
    char gender;
    char address[30];
}st[3], st1[3];

int main(){
    int i;
    for(i=0; i<3; i++){
        printf("\nEnter the details of student %d:\n", i+1);
        printf("Roll no: ");
        scanf("%d%*c", &st[i].roll);
        printf("Name: ");
        scanf("%[^\n]%*c", st[i].name);
        printf("Faculty: ");
        scanf("%[^\n]%*c", st[i].faculty);
        printf("Gender (M/F/O): ");
        scanf("%c%*c", &st[i].gender);
        printf("Address: ");
        scanf("%[^\n]%*c", st[i].address);
    }
    
    FILE *fp = fopen("student record.txt", "w+");
    if(fp==NULL){
        printf("Error Creating File");
        exit(1);
    }
    for(i=0; i<3; i++){
        fprintf(fp, "%d\n%s\n%s\n%c\n%s\n\n", st[i].roll, st[i].name, st[i].faculty, st[i].gender, st[i].address);
    }
    printf("\nWritten Successfully!\n");

    rewind(fp);
    //Reading Portion
    while(fscanf(fp, "%d\n%[^\n]\n%[^\n]\n%c\n%[^\n]\n\n", &st1[i].roll, &st1[i].name, &st1[i].faculty, &st1[i].gender, &st1[i].address) != EOF){
        printf("\nThe Details:\n");
        printf("Roll no: %d", st1[i].roll);
        printf("\nName: %s", st1[i].name);
        printf("\nFaculty: %s", st1[i].faculty);
        printf("\nGender: %c", st1[i].gender);
        printf("\nAddress: %s\n", st1[i].address);
    }
    fclose(fp);
    return 0;
}