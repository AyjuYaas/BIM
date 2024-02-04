#include<stdio.h>

int main(){

    int age1, age2, age3, roll1, roll2, roll3;
    char gender1, gender2, gender3;
    int choice;

    char name1[20] = "Sayujya Satyal";
    age1 = 22;
    gender1 = 'M';
    char address1[30] = "Nakkhu, Lalitpur";
    roll1 = 54;

    char name2[20] = "Sneha Acharya";
    age2 = 20;
    gender2 = 'F';
    char address2[30] = "Harisidhi, Lalitpur";
    roll2 = 56;

    char name3[20] = "Sandesh Pohani";
    age3 = 20;
    gender3 = 'F';
    char address3[30] = "Kapan, Kathmandu";
    roll3 = 51;

    redo:
    printf("\nView Details of Student\n");
    printf("1 - %s\n2 - %s\n3 - %s", name1, name2, name3);
    printf("\nChoose: ");
    scanf("%d", &choice);

    printf("\n");
    switch(choice){
        case 1:
        printf("Name: %s\n", name1);
        printf("Age: %d\n", age1);
        printf("Gender: %c\n", gender1);
        printf("Address: %s\n", address1);
        printf("Roll No: %d\n", roll1);
        break;

        case 2:
        printf("Name: %s\n", name2);
        printf("Age: %d\n", age2);
        printf("Gender: %c\n", gender2);
        printf("Address: %s\n", address2);
        printf("Roll No: %d\n", roll2);
        break;

        case 3:
        printf("Name: %s\n", name3);
        printf("Age: %d\n", age3);
        printf("Gender: %c\n", gender3);
        printf("Address: %s\n", address3);
        printf("Roll No: %d\n", roll3);
        break;

        default:
        printf("Wrong Entry Try Again!!!");
        goto redo;
    }
}