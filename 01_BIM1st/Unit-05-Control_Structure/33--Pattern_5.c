/* Pattern 5:
*****
 ***
  *
*/
#include<stdio.h>
int main(){
	int a, b, c;
	
	for(a=1; a<=3; a++){
		
		for (b=1; b<a; b++){
			printf (" ");
		}
		
		for (c=5; c>=((2*a)-1); c--){
			printf ("*");
		}
		
		printf ("\n");
	}
	
	return 0;
}
