/* Promote user defined variables */
#include<stdio.h>
int main(){
	char ch1;
	int n1, n2;
	printf ("Enter a character and two integer value\n");
	scanf ("%c %d %d", &ch1, &n1, &n2);
	float f1, f2, f3;
	f1 = ch1;
	f2 = n1;
	f3 = n2;
	printf ("Input Characters have been promoted to Float Data type and they are:\n");
	printf ("%.3f %.3f %.3f respectively", f1, f2, f3);
	return 0;
}
