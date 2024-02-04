//Greatest among three
#include<stdio.h>
int main(){
	int no1, no2, no3;
	printf ("Enter three integer type numbers\n");
	scanf ("%d %d %d", &no1, &no2, &no3);
	(no1==no2 || no2==no3 || no3==no1)? printf("Restart The Process with different values"):
	(no1>no2 && no1>no3)? printf("%d is greatest", no1):
	(no2>no1 && no2>no3)? printf("%d is greatest", no2): 
	printf("%d is greatest", no3);
	return 0;
}
