/* check if provided no is equal, greater or less than 100 */
#include<stdio.h>
int main(){
	int a;
	
	printf ("Enter an integer value\n");
	scanf ("%d", &a);
	
	if (a==100){
		printf ("It is equal to 100");
	}
	if (a>100){
		printf ("It is greater than 100");
	}
	if (a<100){
		printf ("It is less than 100");
	}
	
	return 0;
}
