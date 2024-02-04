/* Calculating area and circumference of a circle using simple function */

#include<stdio.h>
#define pi 3.145
#define radius 5
float area();
float circum();

int main(){
	float a, c;
	a = area();
	c = circum();
	printf ("The Area of circle is %f", a);
	printf ("\nThe Circumference of circle is %f", c);
	return 0;
}

float area(){
	float a;
	a = pi*radius*radius;
	return a;
}

float circum(){
	return (2*pi*radius);
}
