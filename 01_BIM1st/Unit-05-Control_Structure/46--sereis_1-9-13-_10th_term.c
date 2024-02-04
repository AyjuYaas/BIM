/* series 1, 5, 9, 13 upto 10th term */
#include<stdio.h>
int main(){
	int a, b = 1;
	
	do{
		printf ("%d ", b);
		b += 4;
		a += 1;
	} while (a<10);
	
	return 0;
}
