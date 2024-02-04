/* Increase the value of 1 by 8 until less than 100 */
#include<stdio.h>
int main(){
	int n = 1;
	
	do{
		printf ("%d\t", n);
		n = n+8;
	} while (n<=100);
	
	return 0;
}
