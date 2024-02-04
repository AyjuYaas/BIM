# include <stdio.h>
int main(){
	
	int a, b, sum, diff, prod , n;
	float div;
	
	printf("Enter two integer numbers\n");
	scanf("%d %d",&a, &b);
	printf ("Enter 1 for addition, 2 for subtraction, 3 for mmultiplication and 4 for division\n");
	scanf ("%d", &n);
	
	switch(n){
		
		case 1:
			sum = a + b;
			printf ("Sum = %d", sum);
			break;
		
		case 2:
			diff = a - b;
			printf("Difference = %d", diff);
			break;
		
		case 3:
			prod = a * b;
			printf ("Product = %d", prod);
			break;
		
		case 4:
			div = (float)a / (float)b;
			printf ("Division = %.3f", div);
			break;
		
		default:
			printf ("Entered Number is not listed");
			
	}
	return 0;
}
