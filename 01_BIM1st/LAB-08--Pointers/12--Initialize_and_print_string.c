#include<stdio.h>
#include<string.h>

int main(){
    char *str = "BIM";
    int i;
    
    printf("\nDisplaying the string:\n");
    for(i=0; i<strlen(str); i++){
        printf("(str+%d): %s\n", i, (str+i));
    }

    return 0;
}
