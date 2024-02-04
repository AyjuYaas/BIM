#include<stdio.h>

struct employee{
    int eID;
    char name[30];
    float salary;
}em={001, "Sabina Khanal", 100000.0};

int main(){
    printf("\nThe Details of The Employee are:\n");
    printf("Employee ID: %03d", em.eID);
    printf("\nName: %s", em.name);
    printf("\nSalary: Rs.%.2f", em.salary);

    return 0;
}