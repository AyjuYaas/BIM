/* Get a string from user and display with 25 field width */
#include<stdio.h>
int main(){
	char str[100];
	puts ("Enter a String");
	gets (str);
	
	printf ("%25s",str);
	return 0;
}
