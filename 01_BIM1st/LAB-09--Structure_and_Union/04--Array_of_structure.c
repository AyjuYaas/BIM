#include<stdio.h>

struct employee{
    int eID;
    char name[30];
    float salary;
}em[4];

int main(){
    int i;
    for(i=0; i<4; i++){
        printf("\nEnter the Details of Employee %d:\n", i+1);
        printf("Enter Emplyee ID: ");
        scanf("%d%*c", &em[i].eID);
        printf("Name: ");
        gets(em[i].name);
        printf("Enter Salary: Rs.");
        scanf("%f", &em[i].salary);
    }

    for(i=0; i<4; i++){
        printf("\nThe Details of Employee %d:", i+1);
        printf("\nEmployee ID: %03d", em[i].eID);
        printf("\nEmployee Name: %s", em[i].name);
        printf("\nSalary: Rs.%.2f\n", em[i].salary);
    }    

    return 0;
}