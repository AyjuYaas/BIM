/* Explicit type conversion (Type Casting) */
#include<stdio.h>
int main(){
	int a = 2, b = 3, integer_div;
	float floating_div;
	integer_div = a / b;
	printf ("Integer type division = %d", integer_div);
	printf ("\nBefore Type Casting");
	floating_div = a/b;
	printf ("\nFloat type division = %f", floating_div);
	printf ("\nAfter Type casting");
	floating_div = (float)a / (float)b;
	printf ("\nFloat type division = %f", floating_div);
	return 0;
}
