/* Arithmetic operations */
#include<stdio.h>
int main(){
	int a = 123;
	float b = 32.4;
	int arth1 = a + (int)b;
	float arth2 = ((float)a * 5.0)/b; 
	printf ("First Operation Result = %d", arth1);
	printf ("\nSecond Operation Result = %f", arth2);
	return 0;
}
