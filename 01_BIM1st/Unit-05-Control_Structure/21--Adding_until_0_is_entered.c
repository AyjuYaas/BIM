/* Adding until 0 is entered */
#include<stdio.h>
int main(){
	int a, sum = 0;
	
	printf ("This program keeps on adding until 0 is entered\n");
	
	do{
		printf ("Enter the number to be added: ");
		scanf ("%d", &a);

		sum += a;
		
	}while (a!=0);
	
	printf ("The sum of above entered number/s = %d", sum);
	
	return 0;
}
