#include<stdio.h>

struct employee{
    int eID;
    char name[30];
    float salary;
};

void display(struct employee);

int main(){
    struct employee em;
    printf("\nEnter the details of the employee:\n");
    printf("Employee Id: ");
    scanf("%d%*c", &em.eID);
    printf("Name: ");
    gets(em.name);
    printf("Salary: ");
    scanf("%f", &em.salary);

    display(em);

    return 0;
}

void display(struct employee em1){
    printf("\nThe Details of Employee:\n");
    printf("Employee Id: %d", em1.eID);
    printf("\nName: %s", em1.name);
    printf("\nSalary: Rs%.2f", em1.salary);
}