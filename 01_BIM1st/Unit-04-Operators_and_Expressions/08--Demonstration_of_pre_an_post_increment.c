/* Demonstartion of pre and post increment */
#include<stdio.h>
int main(){
	int a = 2;
	printf ("a = %d", a);
	printf ("\nDuring pre increment, a = %d", ++a);
	printf ("\nDuring post increment, a = %d", a++);
	printf ("\nAfter post increment, a = %d", a);
	return 0;
}
