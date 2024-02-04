#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("programming.txt", "w");

    if(fp==NULL){
        printf("Error in Opening File");
        exit(1);
    }
    
    fputs("I love Programming", fp);
    printf("\nFile Opened and Written Successfully");

    fclose(fp);
    return 0;
}