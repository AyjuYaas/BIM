/* 1st 20 whole and naturnal number */
#include<stdio.h>
int main(){
	int a, b;
	
	// Whole Numbers
	printf ("First 20 Whole Number:\n");
	
	for (a=0; a<20; ++a){
		printf ("%d ", a);
	}
	
	//Natural Numbers
	printf ("\nFirst 20 Natural Number:\n");
	
	for (b=1; b<=20; ++b){
		printf ("%d ", b);
	}
	
	return 0;
}
