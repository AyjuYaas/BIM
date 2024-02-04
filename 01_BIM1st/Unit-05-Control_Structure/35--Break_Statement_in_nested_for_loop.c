#include<stdio.h>
int main(){
	int i, j;
	
	for(j=1; j<11; j++){
		printf ("Outer loop Number[%d]\n", j);
		
		for (i=1; i<11; i++){
			if (i==5){
				printf ("\tBreak occurs in iteration [%d]", i);
				break;
			}
			printf ("\tInner loop number [%d]\n", i);
		}
		
		printf ("\n");
	}
	return 0;
}