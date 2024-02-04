#include<stdio.h>
int main(){
	char c[] = "Programming is FuN";
	printf ("The string is '%s'", c);
	char a = c[9];
	char b = c[17];
	printf ("\nThe characters to be displayed are '%c' & '%c'", a, b);
	int a1 = a;
	int b1 = b;
	printf ("\nThe ASCII value of above charcters are %d & %d respectively", a1, b1);
	int d = a1 - b1;
	printf ("\nThe positive difference between the above ASCII values = %d", d);
	return 0;
}
