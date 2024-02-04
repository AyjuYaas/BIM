/* Demote int and float to char */
#include<stdio.h>
int main(){
	int a = 101;
	float b = 11.123;
	//let the expression be 'a + b'
	char c = (char)a + (char)b;
	printf ("The result after Demoting = %c", c);
	return 0;
}
