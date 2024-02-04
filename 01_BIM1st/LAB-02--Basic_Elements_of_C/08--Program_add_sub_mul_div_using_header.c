#include <stdio.h>
#include "Calculations.h"
int main(){
	float a = 111.98, b = 97.69;
	printf ("The two numbers are %f, %f Then:", a,b);
	add (a, b);
	sub (a,b);
	mul(a,b);
	div (a,b);
	return 0;
}
