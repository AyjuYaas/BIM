#include<stdio.h>
int main(){
	char character, string[100];
	puts ("Enter a String");
	gets(string);
	puts("Enter a Character");
	character = getchar();
	puts ("The String is:");
	puts(string);
	puts ("The character is:");
	putchar(character);
	return 0;	
}
