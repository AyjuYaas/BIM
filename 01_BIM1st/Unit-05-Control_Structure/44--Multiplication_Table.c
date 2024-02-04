/* Multiplication Table of user defined number */
#include<stdio.h>
int main(){
	int a, n, mul;
	
	printf ("Enter a number you want the Multiplication table of: ");
	scanf ("%d", &n);
	
	for (a=1; a<=20; a++){
		mul = n*a;
		printf ("%d * %d = %d\n", n, a, mul);
	}
	
	return 0;
}
