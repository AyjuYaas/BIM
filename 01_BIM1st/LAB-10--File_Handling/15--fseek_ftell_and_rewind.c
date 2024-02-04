/* Programmatically display the working mechanism of ftell(), rewind(), and fseek() positioning
functions during random access of a file named "greeting.txt". */

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp = fopen("greeting.txt", "r+");
    if(fp==NULL){
        printf("Error Opening File");
        exit(1);
    }
    printf("\nCurrent position of the pointer: %d\n", ftell(fp));
    fseek(fp, 0, 2);
    printf("\nAfter Sending Pointer to the end of file by fseek():");
    printf("\nPosition: %d\n", ftell(fp));

    fseek(fp, -5, 2);
    printf("\nAfter Seeking 5 positions backward from before");
    printf("\nPosition: %d\n", ftell(fp));

    rewind(fp);
    printf("\nAfter Using rewind(), position: %d", ftell(fp));
    
    fclose(fp); 
    return 0;
}