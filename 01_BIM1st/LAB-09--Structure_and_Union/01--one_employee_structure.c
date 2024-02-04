#include<stdio.h>

struct employee{
    int eID;
    char name[20];
    float salary;
};
int main(){
    struct employee em;

    printf("\nEnter the Details of Employee:\n");
    printf("Enter Emplyee ID: ");
    scanf("%d%*c", &em.eID);
    printf("Name: ");
    gets(em.name);
    printf("Enter Salary: Rs.");
    scanf("%f", &em.salary);

    //Displaying the Value
    printf("\nThe Details are:\n");
    printf("\nEmployee ID: %03d", em.eID);
    printf("\nEmployee Name: %s", em.name);
    printf("\nSalary: Rs.%.2f", em.salary);

    return 0;    
}