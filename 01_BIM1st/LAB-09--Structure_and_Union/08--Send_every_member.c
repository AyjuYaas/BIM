#include<stdio.h>

struct employee{
    int eID;
    char name[30];
    float salary;
};

void display(int, char name[], float);

int main(){
    struct employee em;

    printf("\nEnter the details of the employee:\n");
    printf("Employee Id: ");
    scanf("%d%*c", &em.eID);
    printf("Name: ");
    gets(em.name);
    printf("Salary: ");
    scanf("%f", &em.salary);

    display(em.eID, em.name, em.salary);

    return 0;
}

void display(int id, char name[], float s){
    printf("\nThe Details of Employee:\n");
    printf("Employee Id: %d", id);
    printf("\nName: %s", name);
    printf("\nSalary: Rs%.2f", s);
}