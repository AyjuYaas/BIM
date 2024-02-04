/* This program accepts and prints numbers and floats
 n no of times as shown by users */

 #include<stdio.h>
 
 int main(){
    
    int i, j, n1, n2;
    
    printf ("\nEnter the no. of integers values to be entered: ");
    scanf("%d", &n1);
    int a[n1];
    float b[n1];
    
    printf ("Enter the Integer Values:\n");
    for (i=0; i<n1; i++){
        printf ("%d) ", i+1);
        scanf ("%d", &a[i]);
    }

    printf ("Enter the Floating Point Values:\n");
    for (j=0; j<n1; j++){
        printf ("%d) ", j+1);
        scanf ("%f", &b[j]);
    }

    printf ("Entered Integer Values in Arrays\n"); 
    for (i=0; i<n1; i++){
        printf ("a[%d] = %d\n", i, a[i]);
    }

    printf ("Entered Floating Point Values in Arrays\n");
    for (j=0; j<n1; j++){
        printf ("b[%d] = %.3f\n", j, b[j]);
    }

    return 0;
 }
