#include<stdio.h>
int main(){

    FILE *fp = fopen("0-1--hello.txt", "r+");
    fprintf(fp, "Hello World");
    fclose(fp);
    
    return 0;
}