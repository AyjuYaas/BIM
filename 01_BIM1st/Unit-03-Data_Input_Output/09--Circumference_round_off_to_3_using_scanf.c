/* Circumference of circle for user defined inpur and round off to 3 digits */
#include<stdio.h>
#define pi 3.145
int main(){
	float radius, cir;
	printf ("Enter the Radius of the circle\n");
	scanf ("%f", &radius);
	
	cir = 2 * pi * radius;
	printf ("It's Circumference = %.3f", cir);
	return 0;
}
