#include<stdio.h>

struct employee{
    int eID;
    char name[20];
    float salary;
};

int main(){
    struct employee em, em1;
    printf("\nEnter the Details of 1st Employee:\n");
    printf("Enter Emplyee ID: ");
    scanf("%d%*c", &em.eID);
    printf("Name: ");
    gets(em.name);
    printf("Enter Salary: Rs.");
    scanf("%f", &em.salary);
    
    printf("\nEnter the Details of 2nd Employee:\n");
    printf("Enter Emplyee ID: ");
    scanf("%d%*c", &em1.eID);
    printf("Name: ");
    gets(em1.name);
    printf("Enter Salary: Rs.");
    scanf("%f", &em1.salary);

    //Displaying the Value
    printf("\nThe Details of 1st Employee:");
    printf("\nEmployee ID: %03d", em.eID);
    printf("\nEmployee Name: %s", em.name);
    printf("\nSalary: Rs.%.2f\n", em.salary);
    
    printf("\nThe Details of 2nd Employee:");
    printf("\nEmployee ID: %03d", em1.eID);
    printf("\nEmployee Name: %s", em1.name);
    printf("\nSalary: Rs.%.2f", em1.salary);
    return 0;    
}