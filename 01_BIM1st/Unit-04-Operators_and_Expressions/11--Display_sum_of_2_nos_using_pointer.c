/* Using pointer to display the value of sum */
#include<stdio.h>
int main(){
	int a, b, sum;
	int *point;
	printf ("Enter Two Integer numbers:\n");
	scanf("%d %d",&a, &b);
	sum = a + b;
	point = &sum;
	printf ("Their Sum = %d", *point );
	return 0;
}
