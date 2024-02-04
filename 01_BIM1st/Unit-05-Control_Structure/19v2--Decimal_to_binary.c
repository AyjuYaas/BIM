/* Decimal to binary */
#include<stdio.h>
#include<math.h>
int main(){
	long long int dec, bin = 0, rem, k = 0;
	
	printf ("This program converts Decimal value to Binary\n");
	printf ("Enter a decimal value: ");
	scanf ("%lld", &dec);
	
	while (dec!=0){
		rem = dec%2;
		bin = bin + rem * pow (10, k);
		++k;
		dec = dec/2;
	}
	
	printf ("Binary = %lld", bin);
	
	return 0;
}
