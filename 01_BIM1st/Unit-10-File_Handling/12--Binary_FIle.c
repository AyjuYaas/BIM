#include<stdio.h>

struct student{
    int roll;
    char name[30];
    char gender[9];
    char faculty[10];
};

int main(){
    FILE *fp;
    struct student st;
    fp = fopen("12--student.dat", "wb");

    printf("First Name: ");
    scanf("%s", st.name);
    fflush(stdin);
    printf("Roll: ");
    scanf("%d", &st.roll);
    fflush(stdin);
    printf("Gender: ");
    scanf("%s", st.gender);
    fflush(stdin);
    printf("Faculty: ");
    scanf("%s", st.faculty);
    fflush(stdin);

    fwrite(&st, sizeof(st), 1, fp);

    fclose(fp);
    return 0;
}