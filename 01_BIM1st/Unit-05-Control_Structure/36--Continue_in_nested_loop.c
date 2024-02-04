#include<Stdio.h>
int main(){
	int i, j;
	
	for (j=1; j<11; j++){
		printf ("Outer loop Number [%d]\n", j);
		
		for (i=1; i<5; i++){
			if (i==2){
				continue;
			}
			printf ("\tInner Loop Number [%d]", i);
		}
		
		printf ("\n");
	}
	
	return 0;
}
