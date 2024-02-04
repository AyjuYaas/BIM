/* Display using formated I/O */

#include<stdio.h>
int main(){
	char my_text[80];

	printf("\nEnter a String: ");
	scanf("%[^\n]", my_text);
	
    printf("\nYour Text: %s", my_text);

	return 0;
}
