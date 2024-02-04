/* From 05--greetings.txt file separate vowels in another file */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    FILE *re, *vo;
    char c;

    re = fopen("05--greetings.txt", "r");
    vo = fopen("08--Vowels.txt", "w");

    if( re == NULL || vo == NULL){
        printf("Error while creating a file");
        exit(1);
    }

    while ((c = fgetc(re)) != EOF){
        if ((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U')){
            fputc(c, vo);
        }
    }

    fclose(re);
    fclose(vo);

    printf("Succefull!!");
    return 0;
}