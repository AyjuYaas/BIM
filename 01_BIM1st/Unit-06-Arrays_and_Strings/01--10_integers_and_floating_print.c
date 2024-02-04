/* This program accepts and prints 10 integers and floating value */

 #include<stdio.h>
 
 int main(){
    
    int i, j, a[10];
    float b[10];
    
    /***** FOR INTEGER GET *****/
    printf ("Enter the Integer Values:\n");
    
    for (i=0; i<10; i++){
        printf ("%d) ", i+1);
        scanf ("%d", &a[i]);
    }

    /***** FOR FLOATING GET *****/
    printf ("Enter the Floating Point Values:\n");
    
    for (j=0; j<10; j++){
        printf ("%d) ", j+1);
        scanf ("%f", &b[j]);
    }

    printf ("\n");
    /***** FOR INTEGER PRINTING *****/
    printf ("Entered Integer Values in Arrays\n");
    
    for (i=0; i<10; i++){
        printf ("a[%d] = %d\n", i, a[i]);
    }

    printf ("\n");
    /***** FOR FLOATING PRINT *****/
    printf ("Entered Floating Point Values in Arrays\n");

    for (j=0; j<10; j++){
        printf ("b[%d] = %.3f\n", j, b[j]);
    }

    /**** END *****/

    return 0; 
 }
