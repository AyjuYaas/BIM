/* Sum of x-x^2+x^3-x^4+... upto nth term */
#include<stdio.h>
#include<math.h>

int main(){
	printf ("This Program Finds the sum of series x-x^2+x^3-x^4+... uptno nth term");
	 
	int x, n, a, sum = 0;
	
	printf ("\nEnter the value of x: ");
	scanf ("%d", &x);
	printf ("Enter no of terms you want to add: ");
	scanf ("%d", &n);
	
	for (a=1; a<=n; a++){
		sum -= pow(-x, a);	
	}
	
	printf ("Sum = %d", sum);
	
	return 0;
}
