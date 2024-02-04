/* sum of series 1+x^2+2x^2+3x^2+... */
#include<stdio.h>
#include<math.h>
int main(){
	printf ("This program finds the sum of nth terms of series 1 + x^2 + 2x^2 + 3x^2 +...");
	
	int x, n, a, sum = 1;
	
	printf ("\nEnter the value of x: ");
	scanf ("%d", &x);
	printf ("Enter the nth term upto which sum is to be found: ");
	scanf("%d", &n);
	
	for (a=1; a<n; a++){
		sum += a*pow(x,2);
	}
	
	printf ("Sum = %d", sum);
	
	return 0;
}
