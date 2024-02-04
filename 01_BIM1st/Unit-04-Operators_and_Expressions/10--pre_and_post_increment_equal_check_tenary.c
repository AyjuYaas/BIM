/* Pre and Post Increment equal or not check using tenary*/
#include<stdio.h>
int main(){
	int a, b, pre, post;
	printf ("Enter a number (integer):\n");
	scanf("%d", &a);
	b = a;
	pre = ++b;
	printf ("During pre-increment = %d\n", pre);
	post = a++;
	printf ("During post-increment = %d\n", post);
	(pre==post)? printf("They are equal") : printf("They are not equal");
	return 0;
}
