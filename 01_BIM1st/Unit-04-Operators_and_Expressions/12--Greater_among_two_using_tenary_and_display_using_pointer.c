/* Greatest Among two using tenary and display using pointer*/
#include<stdio.h>
int main(){
	int a, b;
	int *point1 = &a;
	int *point2 = &b;
	printf ("Enter two integer value\n");
	scanf ("%d %d", &a, &b);
	(a>=b)? printf("%d is greatest", *point1) : printf ("%d is greatest", *point2);
	return 0; 
}
