/* This Program swaps two numbers entered by the user by using a third variable in programming algorithm*/

#include<stdio.h>
int main(){
	int a,b,c;
	a = 12;
	b = 6;
	printf("Before Swapping: %d, %d", a, b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter Swapping: %d, %d", a, b);
	return 0;
}
