#include<stdio.h>

struct employee{
    int employee_id;
    char name[30];
    char gender;
    float salary;
};

int main(){

    struct employee em;
    printf("\nEnter the id of Employee: ");
    scanf("%d%*c", &em.employee_id);

    printf("Enter the name of employee: ");
    gets(em.name);

    printf("Enter the gender of emplotee: ");
    scanf("%c%*c", &em.gender);

    printf("Enter the salary of employee: ");
    scanf("%f%*c", &em.salary);

    printf("\n\nThe details of the employee is\n");
    printf("\nEmployee Id: %d", em.employee_id);
    printf("\nName of the employee: %s", em.name);
    printf("\nGender of the employee: %c", em.gender);
    printf("\nSalary of the employee: %.2f", em.salary);

    return 0;
}