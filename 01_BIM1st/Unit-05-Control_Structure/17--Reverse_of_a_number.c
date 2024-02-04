/* Reverse an Integer */
#include<stdio.h>
int main(){
	int n1, rem, rev = 0;
	
	printf ("Enter an Integer Value: ");
	scanf ("%d", &n1);
	
	while (n1 != 0){
		rem = n1%10;
		rev = rev*10+rem;
		n1 /= 10;
	}
	
	printf ("The inverse of the number = %d", rev);
	
	return 0;
}
