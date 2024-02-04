#include<stdio.h>
float convert();
float f = 32.23;

int main(){
	float k = convert();
	printf ("When Fahrenheit = %f then\nKelvin = %f", f, k);
	return 0;
}

float convert(){
	float kel = ((5.0/9.0)*(f - 32.0))+273.15;
	return kel;
}
