#include<stdio.h>
int main(){
	float l, s_area, peri, vol; // l = length of one side of a cube
	l = 34.5;
	s_area = 6 * l * l;
	peri = 12 * l;
	vol = l * l * l;
	printf ("Length of a side of cube = %f; Then:", l);
	printf ("\nSurface Area = %f", s_area);
	printf ("\nPerimeter = %f", peri);
	printf ("\nVolume = %f", vol);
	return 0;
}
