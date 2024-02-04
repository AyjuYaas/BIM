/* prime in 1st 50 natural number */
#include<stdio.h>
int main(){
	int n, i, count;
	
	for (n=1; n<=50; n++){
		
		count = 0;
		
		for (i=1; i<=n; i++){
			if (n%i==0){
				count++;
			}
		}
		
		if (count == 2){
			printf ("%d  ", n);
		}
		
	}
	return 0;
}
