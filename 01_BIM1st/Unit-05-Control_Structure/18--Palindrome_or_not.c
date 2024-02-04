/* Palindrome or Not */
#include<stdio.h>
int main(){
	int n1, n2, rem, rev = 0;
	
	printf ("Enter an integer value: ");
	scanf ("%d", &n1);
	
	n2 = n1;
	
	while(n2>0){
		rem = n2%10;
		rev = rev*10+rem;
		n2 = n2/10;
	}
	
	if (rev == n1){
		printf ("It is palindrome");
	}
	else{
		printf ("It is not palindrome");
	}
	
	return 0;
}
