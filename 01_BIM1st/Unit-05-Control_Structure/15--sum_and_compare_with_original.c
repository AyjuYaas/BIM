/* Sum of digits and compare to original number */ 
#include<stdio.h>
int main(){
	int n1, n2,rem; 
	int sum = 0;
	
	printf ("Enter a multi- digit integer number\n");
	scanf ("%d", &n1);
	
	n2 = n1;
	
	while (n1>0){
		rem = n1 % 10;
		sum += rem;
		n1 = n1 / 10;	
	}
	
	printf ("Sum of Digits = %d\n", sum);
	
	if (sum == n2){
		printf ("The sum and original number are equal");
	}
	else{
		printf ("The original number and sum are not equal");
	}
	
	return 0;
}
