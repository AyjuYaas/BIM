/* Perform add, sub, mul, div on two globally declared floating point using function */

#include<stdio.h>
float a = 3.2, b = 2.1;
float sum();
float minus();
float product();
float division();

int main(){
	float add, sub, mul, div;
	add = sum();
	sub = minus();
	mul = product();
	div = division();
	printf ("The two no.s are %f and %f then", a, b);
	printf ("\nsum = %f, \ndifference = %f, \nproduct = %f, \nDivision = %f", add, sub, mul, div);
	return 0;	
}

float sum(){
	float s;
	s = a+b;
	return s;
}

float minus(){
	return (a - b);
}

float product(){
	return (a*b);
}

float division(){
	return(a/b);
}
