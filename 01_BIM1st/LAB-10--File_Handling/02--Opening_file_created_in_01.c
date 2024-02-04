#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("programming.txt", "r");
    if(fp==NULL){
        printf("Error Opening File");
        exit(1);
    }

    char str[100];
    fgets(str, 100, fp);

    printf("\nThe Contents of the file:\n");
    puts(str);

    fclose(fp);
    return 0;
}