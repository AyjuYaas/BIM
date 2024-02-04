/* Using gets and puts */
#include<stdio.h>
int main(){
	char my_text[80];
	puts ("Enter a single line text");
	gets (my_text);
	puts (my_text);
	return 0;
}
