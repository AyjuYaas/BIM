//Create a file named "greeting.txt" and write a text one character at a time.
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp = fopen("greeting.txt", "w");
    char c;
    if(fp==NULL){
        printf("Error creating file");
        exit(1);
    }
    printf("\nStart Writing below:\n");
    while((c = getchar()) != '\n'){
        fputc(c, fp);
    }

    printf("\nWritten in file");

    fclose(fp);
    return 0;
}
