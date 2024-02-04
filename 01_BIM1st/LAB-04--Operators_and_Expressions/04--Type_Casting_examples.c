/* Show Type casting */
#include<stdio.h>
int main(){
	int n1 = 121;
	short n2 = 12;
	char ch = 'c';
	//Implict Type Casting
	float itc = (n1 + ch) / n2;
	//Explicit Type Casting
	float etc = ((float)n1 + (float)ch) / (float)n2;
	printf ("The result while Implicit type casting = %f", itc);
	printf ("\nThe result while Explicit type casting = %f", etc);
}
