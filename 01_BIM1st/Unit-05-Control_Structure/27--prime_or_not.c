/* Prime or not */
#include<stdio.h>
int main(){
	int a, i, count = 0;
	
	printf ("Enter an integer value: ");
	scanf ("%d", &a);
	
	for (i=1; i<=a; i++){
		if (a%i==0){
			count++;
		}
	}
	
	if (count==2){
		printf ("It is a prime number");
	}
	else{
		printf ("It is not a prime number");
	}
	
	return 0;
}
