#include<stdio.h>

int main(){

    struct employee{
        int em_id;
        char name[30];
        char gender;
        float salary;
    }em_list[4];
    int i;

    for(i=0; i<4; i++){
        printf("%d Employee Details\n", i+1);
        printf("ID: ");
        scanf("%d%*c", &em_list[i].em_id);
        printf("Name: ");
        scanf("%[^\n]%*c", em_list[i].name);
        printf("Gender: ");
        scanf("%c%*c", &em_list[i].gender);
        printf("Salary: ");
        scanf("%f%*c", &em_list[i].salary);
        printf("\n"); 
    }

    for(i=0; i<4; i++){
        printf("Employee no. %d\n", i+1);
        printf("ID: %d", em_list[i].em_id);
        printf("Name: %s", em_list[i].name);
        printf("Gender: %c", em_list[i].gender);
        printf("Salary: %f", em_list[i].salary);
        printf("\n"); 
    }

    return 0;
}