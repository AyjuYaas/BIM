/* type conversion */
#include<stdio.h>
int main(){
	int number = 41;
	char character = 's';
	float change = (float)number / (float)character;
	printf ("Initial Values: Integer: %d, Character: %c", number, character);
	printf ("\nThe converted result in float using binary expression  = %f", change);
	return 0;
}
