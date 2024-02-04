#include<stdio.h>
#include<math.h>
int main(){
	float a, l, s;
	a = 90;
	s = sin(a);
	l = log(a);
	printf ("sin(%.3f) = %.4f", a, s);
	printf ("\nlog(%.3f) = %.4f", a, l);
	return 0;
}
