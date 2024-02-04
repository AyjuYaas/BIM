#include<stdio.h>
int main(){
	int i, j;

    printf("\nBoth Inner And Outer Loops Are Iterated 3 times\n");
    printf("But 'break' statement is used at inner loop in 2nd Iteration so:\n\n");
	
	for(j=1; j<=3; j++){
		printf ("Outer loop Number[%d]\n", j);
		
		for (i=1; i<=3; i++){
			if (i==2){
				printf ("\tBreak occurs in iteration [%d]", i);
				break;
			}
			printf ("\tInner loop number [%d]\n", i);
		}
		
		printf ("\n");
	}
	return 0;
}