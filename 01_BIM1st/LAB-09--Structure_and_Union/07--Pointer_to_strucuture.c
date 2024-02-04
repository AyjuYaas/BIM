#include<stdio.h>

struct stu_details{
    int id;
    char name[30];
    char gender;
};

int main(){
    struct stu_details st[2], *p;
    p = st;
    int i;
    for(i=0; i<2; i++){
        printf("\nEnter the details of the student %d:\n", i+1);
        printf("ID number: ");
        scanf("%d%*c", &(p+i)->id);
        printf("Name: ");
        gets((p+i)->name);
        printf("Gender: ");
        scanf("%c", &(p+i)->gender);
    }

    for(i=0; i<2; i++){
        printf("\nThe Details of student %d:\n", i+1);
        printf("Id: %03d", (p+i)->id);
        printf("\nName: %s", (p+i)->name);
        printf("\nGender: %c\n", (p+i)->gender);
    }
    return 0;
}