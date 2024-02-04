#include<stdio.h>

int main(){
	
	int arr[7] = {1, 2, 3, 4, 5, 6, 7};
	int *ptr, *qtr;
	int diff;
	
	ptr = arr+4;
	qtr = arr;
	diff = ptr - qtr;
	
	if(diff > 0){
		printf("The distance between the two %d where ptr is right to the qtr", diff);
	}
	else{
		printf("The distance between the two %d where ptr is left to the qtr", diff);
	}
	
	return 0;
}