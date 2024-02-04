/* check if provided no is greater or not than 100 using if else*/
#include<stdio.h>
int main(){
	int a;
	
	printf ("Enter an integer value\n");
	scanf ("%d", &a);
	
	if (a>100){
		printf ("It is Greater than 100");
	}
	else{
		printf ("It is NOT Greater than 100");
	}
		
	return 0;
}
