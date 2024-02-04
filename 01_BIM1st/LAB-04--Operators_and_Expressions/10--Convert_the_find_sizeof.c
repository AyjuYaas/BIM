/* Size of derived data types in bits and bytes */
#include<stdio.h>
int main(){
	
	int sh, lo, lolo, dob, lodob;
	sh = sizeof(short int);
	lo = sizeof(long int);
	lolo = sizeof (long long int);
	dob = sizeof (double);
	lodob = sizeof (long double);
	
	printf ("The size in bits and bytes of different Data Types:");
	printf ("\nShort Integer = %d bits, %d bytes", sh*8, sh);
	printf ("\nLong Integer = %d bits, %d bytes", lo*8, lo);
	printf ("\nLong Long Integer = %d bits, %d bytes", lolo*8, lolo);
	printf ("\nDouble = %d bits, %d bytes", dob*8, dob);
	printf ("\nLong Double = %d bits, %d bytes", lodob*8, lodob);
	
	return 0;
}
