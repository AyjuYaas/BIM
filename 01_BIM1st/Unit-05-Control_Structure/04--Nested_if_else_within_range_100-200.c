/* Check if entered number is within the range of 100 to 200 using nested if else */
#include<stdio.h>
int main(){
	int a;
	
	printf ("Enter a number: ");
	scanf ("%d", &a);
	
	if (a>=100){
		
		if (a<=200){
			printf ("It is within the range of 100 - 200");
		}
		else{
			printf ("It is Not within the range of 100 - 200");
		}
		
	}
	else{
		printf("It is not within the range of 100 - 200");
	}
	
	return 0;
}
