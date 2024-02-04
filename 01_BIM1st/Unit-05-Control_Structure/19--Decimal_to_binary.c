/* Decimal to binary */
#include<stdio.h>
int main(){
	long long de, rem, bi = 0;
	long long rem1, rev = 0;
	int count = 0;
	
	printf ("Enter a decimal value\n");
	scanf ("%lld", &de);
	
	while (de != 0){
		rem = de % 2;
		bi = bi * 10 + rem;
		++count;
		de = de / 2;
	}
	
	while (count != 0){
		--count;
		rem1 = bi % 10;
		rev = rev * 10 + rem1;
		bi = bi / 10;
	}
		
	printf ("The Binary form = %lld", rev);
	return 0;
}
