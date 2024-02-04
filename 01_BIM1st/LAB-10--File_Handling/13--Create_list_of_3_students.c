//Create a binary text file "student list.dat" having the records of three students.

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
    
    FILE *fp = fopen("student list.dat", "wb");
    if(fp==NULL){
        printf("Error Creating File");
        exit(1);
    }
    fwrite(&st, sizeof(st), 3, fp);
    printf("\nWritten Successfully!");
    fclose(fp);
    return 0;
}