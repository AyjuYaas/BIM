/* Create a file 'student.txt' containing the details using structure */

#include<stdio.h>
struct details{
    int roll;
    char name[30];
    char gender[10];
};

int main(){
    struct details st[3], stp[3];
    FILE *fp;
    int i;

    fp = fopen("11--student.txt", "w+");
    
    for(i=0; i<3; i++){
        printf("\nEnter the Details For Student No.%d", i+1);
        printf("\nName: ");
        scanf("%[^\n]%*c", st[i].name);
        printf("Roll No: ");
        scanf("%d%*c", &st[i].roll);
        printf("Gender: ");
        scanf("%[^\n]%*c", st[i].gender);

        fprintf(fp, "%d %s %s\n", st[i].roll, st[i].name, st[i].gender);
    }

    rewind(fp);
    printf("\nDisplaying the content from the file containing the details:\n");
    int a;
    for(a=0; a<3; a++){
        fscanf(fp, "%d %s %s\n", &stp[a].roll, &stp[a].name, &stp[a].gender);
        printf("\nDetails for student %d", a+1);
        printf("\nName: %s", stp[a].name);
        printf("\nRoll No: %d", st[a].roll);
        printf("\nGender: %s", st[a].gender);
        printf("\n");
    }

    fclose(fp);

    return 0;
    
}