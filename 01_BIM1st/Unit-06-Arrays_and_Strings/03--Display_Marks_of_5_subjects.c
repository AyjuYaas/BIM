/* Get the marks of 5 subjects And Display It */

#include<stdio.h>

int main(){

    int i, j; 
    float marks[5];

    /******* Geting The Marks **********/
    printf ("Enter the Marks obtained on 5 subjects:\n");

    for (i=0; i<=4; i++){
        printf ("Subject %d => ", i+1);
        scanf ("%f", &marks[i]);
    }
    /*##########################################*/
    
    printf ("\n");
    
    /*********** Displaying the Marks ************/
    printf ("Your Marks on 5 subjects are:\n");

    for (j=0; j<=4; j++){
        printf ("Subject %d => %.3f\n", j+1, marks[j]);
    }
    /*#############################################*/

    return 0;
}