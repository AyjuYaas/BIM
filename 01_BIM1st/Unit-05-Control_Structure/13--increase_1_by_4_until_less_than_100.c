/* Increase the value of 1 by 4 until less than 100 */
#include<stdio.h>
int main(){
	int n = 1;
	
	while (n<=100){
		printf ("%d\t", n);
		n = n+4;
	}
	
	return 0;
}
