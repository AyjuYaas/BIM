/* Smallest among three using conditional operator*/
#include<stdio.h>
int main(){
	float a, b, c;
	printf ("Enter Three Numbers\n");
	scanf ("%f %f %f", &a, &b, &c);
	(a<=b && a<=c)? printf ("%.2f is smallest", a):
	(b<=a && b<=c)? printf ("%.2f is smallest", b):
	printf ("%.2f is smallest", c);
	return 0;
}
