#include<stdio.h>
int main(){
	char character, word[100];
	printf ("Enter a Character and a word\n");
	scanf ("%c %s", &character, &word);
	printf ("\nThe character is: %c", character);
	printf ("\nThe String is: %s", word);
	return 0;
}
