#include<stdio.h>
int main(){
	int i, j;
	printf ("Enter an integer number:\n");
	scanf ("%d", &j);
	
	if (j<11){
		goto loop1;
	}
	
	printf ("Statement before label, because you entered number greater than 10");
	goto jump_over;
	
	loop1:
		printf ("Statement within the label");
	
	jump_over:
		return 0;
}