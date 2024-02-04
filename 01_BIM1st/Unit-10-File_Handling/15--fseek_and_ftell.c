#include<stdio.h>

int main(){
    
    FILE *fp = fopen("15--Greetings.txt", "w");
    
    fprintf(fp, "Good Morning Everyone !!!");
    fseek(fp, 0, 0);
    printf("\nFseek to the begining: %d", ftell(fp));

    fseek(fp, 0, 2);
    printf("\nFseek to the EOF: %d", ftell(fp));

    fseek(fp, -20, 1);
    printf("\nSeeking 20 step behind the current position(EOF): %d", ftell(fp));

    rewind(fp);
    printf("\nAfter Remind function: %d", ftell(fp));

    //Adding Text after 4th line saying Old
    fseek(fp, 4, 0);
    fprintf(fp, " Old ");

    fclose(fp);
    return 0;
}