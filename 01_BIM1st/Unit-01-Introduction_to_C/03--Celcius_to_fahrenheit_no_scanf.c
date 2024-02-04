/* This program converts celcius to fahrenheit without the use of scanf syntax*/
#include<stdio.h>
int main(){
	float c,f; 
	c = 50;
	f= ((9.0*c)/5.0)+32.0;
	printf ("%f celcius = %f fahrenheit",c,f);
	return 0;
}
