/* check if provided no is equal, greater or less than 100 using if else if */
#include<stdio.h>
int main(){
	int a;
	
	printf ("Enter an integer value\n");
	scanf ("%d", &a);
	
	if (a==100){
		printf ("It is Equal to 100");
	}
	
	else if (a>100){
		printf ("It is Greater than 100");
	}
	else{
		printf ("It is Less than 100");
	}
		
	return 0;
}
