/* This program accepts and prints numbers and floats
 n no of times as shown by users */

 #include<stdio.h>
 
 int main(){
    
    int i, j, n;
    
    printf ("\nEnter the no. of values to be entered: ");
    scanf("%d", &n);
    int a[n];
    float b[n];
    
    printf ("Enter the Integer Values:\n");
    for (i=0; i<n; i++){
        printf ("%d. ", i+1);
        scanf ("%d", &a[i]);
    }

    printf ("Enter the Floating Point Values:\n");
    for (j=0; j<n; j++){
        printf ("%d) ", j+1);
        scanf ("%f", &b[j]);
    }

    printf ("Entered Integer Values in Arrays\n"); 
    for (i=0; i<n; i++){
        printf ("a[%d] = %d\n", i, a[i]);
    }

    printf ("Entered Floating Point Values in Arrays\n");
    for (j=0; j<n; j++){
        printf ("b[%d] = %.3f\n", j, b[j]);
    }

    return 0;
 }
