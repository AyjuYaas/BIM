/* Display using Unformated I/O */

#include<stdio.h>
int main(){
	char my_text[80];

	puts ("\nEnter a String:");
	gets (my_text);
    puts("\nYour Text:");
	puts (my_text);

	return 0;
}
