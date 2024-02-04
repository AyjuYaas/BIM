/* Armstrong Number */
#include<stdio.h>
#include<math.h>
int main(){
	int n1, n2, n3, rem, sum = 0, count = 0;
	
	printf ("Enter a number: ");
	scanf ("%d", &n1);
	
	n2 = n1;
	n3 = n1;
	
	if (n1>=0 && n1<10){
		printf ("It is an Armstrong number");
	}
	else{
		
		while (n2>0){
			count ++;
			n2 = n2/10;
		}
		
		while (n3>0){
			rem = n3%10;
			sum += pow (rem, count);
			n3 = n3/10;
		}
	}
	
	if (sum==n1){
		printf ("It is an Armstrong number");
	}
	else{
		printf ("It is not an Armstrong number");
	}
	
	return 0;
}
