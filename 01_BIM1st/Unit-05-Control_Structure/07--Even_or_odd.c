/* Even or odd */
#include<stdio.h>
int main(){
	int a;
	
	printf ("Enter an integer value:\n");
	scanf ("%d", &a);
	
	if (a%2==0){
		printf ("It is EVEN");
	}
	else{
		printf ("It is ODD");
	}
	
	return 0;
}
