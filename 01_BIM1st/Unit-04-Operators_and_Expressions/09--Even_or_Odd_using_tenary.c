/* Even or Odd using Tenary Operator */
#include<stdio.h>
int main(){
	int a;
	printf ("Enter an Integer:\n");
	scanf("%d", &a);
	(a%2==0)? printf ("It is EVEN") : printf("It is ODD");
	return 0;
}
