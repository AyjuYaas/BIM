/* printf for data types */
#include<stdio.h>
int main(){
	int n = 12;
	float fp = 789.123456;
	double dp = 789.123456;
	char c = 'M';
	char str[50] = "Good Morning";
	printf ("Integer value is %d", n);
	printf ("\nFloating point value is %f", fp);
	printf ("\nDouble value is &lf", dp);
	printf ("\nCharacter is %c", c);
	printf ("\nString is %s", str);
	printf ("\nOctal Value is %o", n);
	printf ("\nHexadecimal Value is %x", n);
	return 0;
}
