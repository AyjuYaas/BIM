/* Using getchar and putchar also toupper */

#include<stdio.h>
int main(){
	char upper, lower;
	printf ("Enter a lower case letter\n");
	lower = getchar();
	
	upper = toupper(lower);
	putchar (upper);
	putchar ('A');
	putchar (65);
	return 0;
}
