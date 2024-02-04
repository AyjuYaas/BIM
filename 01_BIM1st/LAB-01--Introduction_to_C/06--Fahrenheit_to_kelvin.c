#include<stdio.h>
int main(){
	float f, k; 
	f = 50.9;
	k = ((f-32.0)*(5.0/9.0))+273.15;
	printf ("%f fahrenheit = %f Kelvin",f,k);
	return 0;
}
