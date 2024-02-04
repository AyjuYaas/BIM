/* Convert (0 - 50)C into Fah */
#include<stdio.h>
int main(){
	float cel, fah;
	
	for (cel=1; cel<=50; cel++){
		fah = (((9.0/5.0)*cel)+32.0);
		printf ("%.1f celcius = %.1f fahrenheit\n", cel, fah);
	}
	
	return 0;
}
