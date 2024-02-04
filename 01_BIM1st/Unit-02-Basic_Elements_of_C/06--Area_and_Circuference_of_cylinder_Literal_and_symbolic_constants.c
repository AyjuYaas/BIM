/* Area and Circumference using literal and Symbolic constants */

#include<stdio.h>
#define pi 3.14593 //literal constant

int main (){
	float a, c; //area 'a' & circumference 'c'
	float r = 2.14; // radius 'r'
	float h = 3.1; //height 'h'
	a = 2.0 * pi * r * (r+h);
	c = 2.0 * pi * r;
	printf ("In a cylinder of Radius = %f & Height = %f;\nArea = %f; \nCircumference = %f", r, h, a, c);
	return 0;
}
