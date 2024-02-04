#include<stdio.h>
#include<math.h>
int main(){
	float a, sq, sqr;
	a = 4.0;
	sq = pow (a,2);
	sqr = sqrt(a);
	printf ("The square of %.2f = %.2f", a, sq);
	printf ("\nThe square root of %.2f = %.2f", a, sqr);
	return 0;
}
