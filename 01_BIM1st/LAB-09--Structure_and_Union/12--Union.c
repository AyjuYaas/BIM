#include<stdio.h>

union employee{
    int eID;
    char name[30];
    float salary;
};

int main(){
    union employee em;
    printf("\nEnter the details of the employee:\n");
    printf("Employee Id: ");
    scanf("%d%*c", &em.eID);
    printf("The Id number is: %d\n", em.eID);

    printf("\nName: ");
    gets(em.name);
    printf("The Entered Name: %s\n", em.name);

    printf("\nSalary: ");
    scanf("%f", &em.salary);
    printf("%.2f", em.salary);

    return 0;
}