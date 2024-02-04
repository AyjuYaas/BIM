/* Pattern
  *
 ***
*****
 ***
  *
*/
#include<stdio.h>
#include<math.h>
int main(){
	int a, b = 1, c, k;
	a = -2;
	k = 2;
	
	for (a=-2; a<=2; a++){
		
		k = a;
		(a<0)? (k = -1*a) : (k = a);
		
		for (b=1; b<=k; b++){
			printf (" ");
		}
		
		for (c=1; c<=(5-(2*k)); c++){
			printf ("*");
		}
		
		printf ("\n");
	}
	return 0;
}
