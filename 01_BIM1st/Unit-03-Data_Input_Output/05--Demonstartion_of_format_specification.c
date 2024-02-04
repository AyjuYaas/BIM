/* Demonstration of format specification */
#include<stdio.h>
int main(){
	printf ("opposite of %s is %s", "wrong", "right");
	printf ("\nFirst integer number = %d", 12345);
	printf ("\nSecond integer number = %04d", 45);
	printf ("\nThird integer number = %i", 12345);
	printf ("\nFloating point value = %.3f", 12345.6789);
	printf ("\nHexadecimal value = %x",15);
	printf("\nOctal value = %o", 8);
	printf ("\nSigned integer value = %d", -82);
	printf ("\nUnsigned integer value = %u", -82);
	printf ("\nWe wrote with our %d%%", 100);
	return 0;
}
