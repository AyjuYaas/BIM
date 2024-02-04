/* Sum of Digits */
#include<stdio.h>
int main(){
	int a, rem; 
	int sum = 0;
	
	printf ("Enter a multi- digit integer number\n");
	scanf ("%d", &a);
	
	while (a>0){
		rem = a % 10;
		sum += rem;
		a = a / 10;	
	}
	
	printf ("Sum of Digits = %d", sum);
	return 0;
}
