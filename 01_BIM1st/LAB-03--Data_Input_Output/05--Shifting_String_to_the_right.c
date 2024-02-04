//Shifting the string by 20
#include<stdio.h>
int main(){
	char str[100];
	char blank;
	printf ("Enter a string\n");
	gets(str);
	printf ("\n%20s", str);
	printf ("\nYour string was shifted to right by width of 20 including the string");
	return 0;
}
