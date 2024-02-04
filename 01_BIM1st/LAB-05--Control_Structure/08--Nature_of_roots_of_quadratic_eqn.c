/* Nature of Quadratic Roots */

#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c, root;
	
	printf ("\nThis shows the nature of root for quadratic equation ax^2+bx+c");
	
	printf("\nEnter the Value of a, b and c\n");
	scanf ("%d %d %d", &a,&b,&c);
	
	root = pow(b,2) - 4*a*c;
	
	if (root>=0){
		printf ("\nThe equation has Real roots");
	}
	else{
		printf ("\nThe equation has Imaginary roots");
	}
	return 0;
}
