/* Pre-Decrement and Post-Decrement */
#include<stdio.h>
int main(){
	int a = 3;
	int b = a;
	printf ("Initial values a = %d, b = %d", a, b);
	printf ("\nDuring pre-decrement: a = %d", --a);
	printf ("\nDuring post-decrement: b = %d", b--);
	printf ("\nAfter post-decrement: b = %d", b);
	return 0;
}
