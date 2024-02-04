/* Sum of even numbers upto nth terms */
#include<stdio.h>
int main(){
	printf ("This Program finds the sum of even numbers upto nth terms\n");
	
	int n, a, sum = 0;
	
	printf ("Enter the no. of terms: ");
	scanf ("%d", &n);
	
	for (a=1; a<=n; a++){
		sum += n + 1;
	}
	
	printf ("Sum = %d", sum);
	
	return 0;
}
