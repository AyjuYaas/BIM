/* Greatest among three using if else and logic */
#include<stdio.h>
int main(){
	int a, b, c;

	printf ("Enter three numbers\n");
	scanf ("%d %d %d", &a ,&b ,&c);
	
	if (a>b && a>c){
		printf ("%d is greatest", a);
	}
	else{
		if (b>c && b>a){
		printf ("%d is greatest", b);
		}
		else{
		printf("%d is greatest", c);
		}
	}
	
	return 0;
}
