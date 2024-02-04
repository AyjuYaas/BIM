/*Display ProgRamming and show character N and it's ASCII Value*/

#include<stdio.h>
 
char c[] = "ProgRammiNg";
char text();
void ASCII1();
int difference();

int main(){
	char ch = text();
	int differ = difference();
	printf ("The String is %s amd the character is %c", c, ch);
	ASCII1();
	printf ("\nThe Positive difference = %d", differ);
	return 0;
}
	
char text(){
	char c1 = c[9];
	return c1;
}

void ASCII1(){
	printf ("\nThe ASCII value of %c and %c are %d and %d respectively", c[1], c[4], c[1], c[4]);
}

int difference(){
	int d1 = c[1];
	int d2 = c[4];
	unsigned diff = d1 - d2;
	return diff;
}
