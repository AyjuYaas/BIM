#include<stdio.h>
#include<string.h>

struct employee{
    int eID;
    char name[30];
    float salary;
}em[4], em1[4];

int main(){
    int i, j, k;
    char temp[30];
    for(i=0; i<4; i++){
        printf("\nEnter the Details of Employee %d:\n", i+1);
        printf("Enter Emplyee ID: ");
        scanf("%d%*c", &em[i].eID);
        printf("Name: ");
        gets(em[i].name);
        printf("Enter Salary: Rs.");
        scanf("%f%*c", &em[i].salary);
    }

    for(i=0; i<3; i++){
        strcpy(temp, em[i].name);
        for(j=i+1; j<4; j++){
            if(strcmp(temp, em[j].name) > 0){
                strcpy(temp, em[j].name);
                k = j;
            }
        }
        em1[i] = em[k];
        em[k] = em[i];
        em[i] = em1[i];
    }

    for(i=0; i<4; i++){
        printf("\nThe Details of Employee %d:", i+1);
        printf("\nEmployee ID: %03d", em[i].eID);
        printf("\nEmployee Name: %s", em[i].name);
        printf("\nSalary: Rs.%.2f\n", em[i].salary);
    }    

    return 0;
}