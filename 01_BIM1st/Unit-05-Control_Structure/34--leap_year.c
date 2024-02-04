#include<stdio.h>
int main(){
	int year;
	printf ("Enter a year: ");
	scanf ("%d", &year);
	
	if (year%4==0){
		if (year%100!=0){
			printf ("It is Leap Year");
		}
		else{
			if (year%400==0){
				printf ("It is Leap Year");
			}
			else{
				printf ("It is not Leap Year");
			}
		}
	}
	else{
		printf ("It is not Leap Year");
	}
	
	return 0;
}
