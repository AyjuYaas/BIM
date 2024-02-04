#include<stdio.h>
int main(){
	int a;
	
	printf ("\nEnter an integer value: ");
	scanf ("%d", &a);
	
	if (a==100){
		printf ("\nIt is Equal to 100");
	}
	
	else if (a>100){
		printf ("\nIt is Greater than 100");
	}
	else{
		printf ("\nIt is Less than 100");
	}
		
	return 0;
}