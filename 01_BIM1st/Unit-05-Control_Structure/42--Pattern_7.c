/* Pattern 7:
1
23
345
4567
56789
*/
#include<stdio.h>
int main(){
	int a, b;
	
	for (a=1; a<=5; a++){
		
		for (b=a; b<2*a; b++){
			printf ("%d",b);
		}
		
		printf ("\n");
	}
	
	return 0;
}
