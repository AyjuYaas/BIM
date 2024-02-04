/* Create a file named 05--greetings.txt and write one character at a time */

#include<stdio.h>
#include<stdlib.h>

int main(){
    char a;
    FILE *fp = fopen("05--greetings.txt", "w");

    if(fp==NULL){
        printf("\nError in Creating File!!");
        exit(1);
    }

    printf("\nThe File has been Created\n");
    printf("Keep on Writing:\n");
    
    while ((a = getchar()) != '\n'){
        fputc(a, fp);
    }
    fclose(fp);

    return 0;
}