/* Pattern 8:
1
22
333
4444
55555
*/
#include<stdio.h>
int main(){
	int a, b;
	
	for (a=1; a<=5; a++){
		
		for (b=1; b<=a; b++){
			printf ("%d",a);
		}
		
		printf ("\n");
		
	}
	return 0;
}
