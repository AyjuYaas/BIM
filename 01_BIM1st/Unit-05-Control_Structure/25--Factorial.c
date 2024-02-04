/* Factorial */
#include <stdio.h>
int main(){
	int x, i, fact = 1;
	
	printf ("Enter the number for which factorial is to be found: \n");
	scanf ("%d", &x);
	
	for (i=x; i>0; i--){
		fact = fact * i;
	}
	
	printf ("Factorial is %d", fact);

	return 0;
}
