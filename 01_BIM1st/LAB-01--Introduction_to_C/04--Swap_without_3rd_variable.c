#include<stdio.h>
int main(){
	int a, b;
	a = 5;
	b = 11;
	printf ("Before Swapping: %d,%d", a, b);
	a = a - b;
	b = a + b;
	a = b - a;
	printf ("\nAfter Swapping: %d,%d", a, b);
	return 0;
}
