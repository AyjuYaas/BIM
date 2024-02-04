#include<stdio.h>
int main(){
	int a,b,temp;
	a = 2;
	b = 3;
	printf ("Before Swapping: %d, %d", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("\nAfter Swapping: %d, %d", a, b);
	return 0;
}
