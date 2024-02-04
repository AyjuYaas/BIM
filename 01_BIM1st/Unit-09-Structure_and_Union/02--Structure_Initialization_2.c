#include<stdio.h>

struct employee{
    int employee_id;
    char name[30];
    char gender;
    float salary;
}em = {13, "Sayuj Satyal", 'M', 10000.0};

int main(){

    printf("\nThe Details of the employee is:\n");
    printf("\nEmployee id: %d", em.employee_id);
    printf("\nName of the employee: %s", em.name);
    printf("\nGender of employee: %c", em.gender);
    printf("\nSalary of the employee: %.2f", em.salary);

    return 0;
}