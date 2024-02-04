/* Add, sub, mul, divide two floating value from the user */
#include<stdio.h>
int main(){
	float n1, n2, sum ,diff, pro, div;
	printf ("Enter two numbers\n");
	scanf ("%f %f", &n1, &n2);
	
	sum = n1+n2;
	diff = n1 - n2;
	pro = n1 * n2;
	div = n1/n2;
	
	printf ("Sum = %f \nDifference = %f \nProduct = %f \nDivision = %f", sum, diff, pro, div);
	return 0;
}
