/* Unary Operator and pointer */
#include<stdio.h>
#include<stdbool.h>
int main(){
	int a = 2, b = 4, j = 7;
	bool c = 1;
	float f = 7.89;
	printf ("a = %d, b = %d, c = %d", a, b, c);
	++a;
	printf ("\nAfter pre increment, a = %d", a);
	a++;
	printf ("\nAfter post increment, a = %d", a);
	--b;
	printf ("\nAfter pre decrement, b = %d", b);
	b--;
	printf ("\nAfter post decrement, b = %d", b);
	printf ("\nBefore negation, c = %d", c);
	printf ("\nAfter negation, c = %d", !c);
	printf ("\nBefore Type Casting, f = %f", f);
	printf ("\nAfter Type Casting, f = %d", (int)f);
	printf ("\nSize of character type is %d", sizeof(char));
	printf ("\nAddress of j is %d", &j);
	int *p;
	p = &j;
	printf ("\nAddress of j using pointer p is %d", p);
	printf ("\nValue of j using pointer p is %d", *p);
	return 0;
}
