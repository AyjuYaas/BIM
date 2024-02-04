/* SUM OF HARMONIC SERIES 1+ 1/2+ 1/3+ 1/4+...+ 1/n */
#include<stdio.h>
int main(){
	printf ("This program finds the sum of harmonic series 1+ 1/2+ 1/3+ 1/4+...+ 1/n");
	
	int a, n; 
	float sum = 0;
	
	printf ("\nEnter the no. of terms: ");
	scanf ("%d", &n);
	
	for (a=1; a<=n; a++){
		sum += 1/(float)a;
	}
	
	printf ("sum = %.2f", sum);
	
	return 0;
}
