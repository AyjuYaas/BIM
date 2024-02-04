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
    fp = fopen("12--student.dat", "rb");
    fread(&st, sizeof(st), 1, fp);

    printf("\nFirst Name: %s", st.name);
    printf("\nRoll: %d", st.roll);
    printf("\nGender: %s", st.gender);
    printf("\nFaculty: %s", st.faculty);

    fclose(fp);
    return 0;
}