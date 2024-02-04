//Simple Intrest
#include<stdio.h>
int main(){
	float principle, intrest, time, rate;
	printf ("For Simple Intrest calculation enter the following values");
	printf ("\nPrincipal = ");
	scanf ("%f", &principle);
	printf ("Time(in months) = ");
	scanf ("%f", &time);
	printf ("Rate = ");
	scanf ("%f", &rate);
	intrest = (principle * time * rate)/100.0;
	printf ("\nSimple Intrest = %.2f", intrest);
	return 0;
}