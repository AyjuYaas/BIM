#include<Stdio.h>
int main(){
	int i, j;
	
    printf("\nBoth Inner and Outer loop are Iterated 3 times\n");
    printf("'Continue' statement is used in 2nd iteration of inner loop so:\n\n");
	for (j=1; j<=3; j++){
		printf ("Outer loop Number [%d]\n", j);
		
		for (i=1; i<=3; i++){
			if (i==2){
				continue;
			}
			printf ("\tInner Loop Number [%d]", i);
		}
		
		printf ("\n");
	}
	
	return 0;
}
