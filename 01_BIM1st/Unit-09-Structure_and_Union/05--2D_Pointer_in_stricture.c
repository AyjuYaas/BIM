#include<stdio.h>

int main(){

    struct details{
        char name[30];
        int roll;
    };

    struct details st1[2], *ptr;

    ptr = st1;

    int i = 0;
    for(i=0; i<2; i++){
        printf("Name: ");
        scanf("%s", (ptr+i)->name);
        printf("Roll: ");
        scanf("%d", &(ptr+i)->roll);
        printf("\n");
    }

    for(i=0; i<2; i++){
    printf("Name: %s", (ptr+i)->name);
    printf("\nRoll: %d", (ptr+i)->roll);
    printf("\n\n");
    }

    return 0;

}