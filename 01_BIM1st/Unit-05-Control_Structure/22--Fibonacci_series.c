/* Fibonacci Series */
#include<stdio.h>
int main(){
	int a = 0, b = 1, c, n;
	
	printf ("Enter the number until which you want the Fibonacci Sequence to be displayed: ");
	scanf ("%d", &n);
	
	do{
		printf ("%d\t",a);
		c = a + b;
		a = b;
		b = c;
	} while (a <= n);
	
	return 0;
}
