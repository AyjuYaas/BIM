/* Display using pointer */
#include<stdio.h>
int main(){
	int *point, number;
	printf ("Enter an Integer type value\n");
	scanf ("%d", &number);
	point = &number;
	printf ("The number = %d\nIt's location = %d", *point, point);
	return 0;
}
