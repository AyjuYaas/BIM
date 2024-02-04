#include<stdio.h>

struct employee{
    int eID;
    char name[30];
    float salary;
};

void display(int, struct employee em1[]);

int main(){
    int n, i;
    printf("\nEnter number of records: ");
    scanf("%d", &n);
    struct employee em[n];

    for(i=0; i<n; i++){
        printf("\nEnter the details of the employee %d:\n", i+1);
        printf("Employee Id: ");
        scanf("%d%*c", &em[i].eID);
        printf("Name: ");
        gets(em[i].name);
        printf("Salary: ");
        scanf("%f", &em[i].salary);
    }

    display(n, em);

    return 0;
}

void display(int n, struct employee em1[]){
    int i;
    for(i=0; i<n; i++){
        printf("\nThe Details of Employee %d:\n", i+1);
        printf("Employee Id: %d", em1[i].eID);
        printf("\nName: %s", em1[i].name);
        printf("\nSalary: Rs%.2f\n", em1[i].salary);
    }
}