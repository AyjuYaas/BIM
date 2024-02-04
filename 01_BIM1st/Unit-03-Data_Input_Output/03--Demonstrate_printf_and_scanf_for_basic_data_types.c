/* Demonstrate printf and scanf for basic data types */
#include<stdio.h>
int main(){
	int i;
	float fp;
	char c;
	char s[100];
	printf ("Enter an integer, floating point no., a character and a string\n");
	scanf ("%d %f %c %s",&i,&fp,&c,&s);
	printf ("\nInteger Value is %d", i);
	printf ("\nFloating point value is %f", fp);
	printf ("\nThe Character is %c", c);
	printf ("\nThe String value is %s", s);
	return 0;
}
