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

    fp = fopen("14--student.dat", "wb+");
    
    for(i=0; i<3; i++){
        printf("\nEnter the Details For Student No.%d", i+1);
        printf("\nName: ");
        scanf("%[^\n]%*c", st[i].name);
        printf("Roll No: ");
        scanf("%d%*c", &st[i].roll);
        printf("Gender: ");
        scanf("%[^\n]%*c", st[i].gender);
    }

    fwrite(st, sizeof(st), 3, fp);

    rewind(fp);
    printf("\nDisplaying the content from the file containing the details:\n");
    int a;
    fread(stp, sizeof(stp), 3, fp);
    for(a=0; a<3; a++){
        printf("\nDetails for student %d", a+1);
        printf("\nName: %s", stp[a].name);
        printf("\nRoll No: %d", stp[a].roll);
        printf("\nGender: %s", stp[a].gender);
        printf("\n");
    }

    fclose(fp);

    return 0;
    
}