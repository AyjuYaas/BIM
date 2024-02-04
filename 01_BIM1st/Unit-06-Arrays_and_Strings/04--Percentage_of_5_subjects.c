/* Get the marks of 5 subjects And Find the percentage*/

#include<stdio.h>

int main(){

    int i, j; 
    float marks[5];

    /************* Geting The Marks *****************/
    printf ("Enter the Marks obtained on 5 subjects:\n");
    printf ("Full Marks = 100\n");

    for (i=0; i<=4; i++){
        printf ("Subject %d => ", i+1);
        scanf ("%f", &marks[i]);
    }
    /*##########################################*/
    
    printf ("\n");
    
    /*********** Percentage Calculation ************/
    float sum, percentage;

    for (j=0; j<=4; j++){
        sum += marks[j];
    }

    percentage = (((sum)/500.0)*100);
    /*#############################################*/

    printf ("Your Percentage = %.2f", percentage);

    return 0;
}