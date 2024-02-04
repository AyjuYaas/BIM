/* Demonstrate Width in format specification */
#include<stdio.h>
int main(){
	char ch = 'y';
	printf ("%c\n", ch);
	
	int a = 4, b = 7;
	printf ("%d\n", a);
	printf ("%i\n",b);
	
	float c = 12.56;
	printf ("%f\n",c);
	printf ("%e\n",c); //Displays result in exponent
	
	int d = 13;
	printf ("%o\n", d); //Displays result in octal
	printf ("%x\n", d); //Displays result in hexadecimal
	
	char str[] = "Information era";
	printf ("%s\n", str);
	printf ("%20s\n", str);
	printf ("%-20s\n", str);
	printf ("%10.4s\n", str);
	printf ("%-10.4s", str);
	
	return 0;
}
