/* check if provided no is equal, greater or less than 0 */
#include<stdio.h>
int main(){
	int a;
	
	printf ("Enter an integer value\n");
	scanf ("%d", &a);
	
	if (a==0){
		printf ("It is equal to zero");
	}
	else if (a>0){
		printf ("It is greater than zero");
	}
	else{
		printf ("It is less than zero");
	}
	
	return 0;
}
