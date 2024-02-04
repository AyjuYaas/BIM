#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp = fopen("programming.txt", "a");
    if(fp==NULL){
        printf("Error Opening File");
        exit(1);
    }
    else{
        printf("\nSuccessfully Opened a file");
    }

    fputs(" very much", fp);
    printf("\nAppended in file");

    fclose(fp);
    return 0;
}