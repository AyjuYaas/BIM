/* eg in conversion using binary expression */
#include<stdio.h>
#include<stdbool.h>
int main(){
	int x = 68;
	bool y = true;
	char c = 'D';
	short s = 7;
	double d = 12.567;
	printf ("%c", c+y);
	printf ("\n%d", x+s);
	printf ("\n%lf", d*c);
	return 0;
}
