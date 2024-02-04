#include<stdio.h>
int main(){
	printf("Byte size of:");
	printf("\nCharacter data type = %d bytes", sizeof(char));
	printf("\nInteger data type = %d bytes", sizeof(int));
	printf("\nDouble Precision float data type = %d bytes", sizeof(double));
	printf("\nShort Integer data type = %d bytes", sizeof(short));
	printf("\nLong Integer data type = %d bytes", sizeof(long));
	printf("\nLong Long Integer data type = %d bytes", sizeof(long long int));
	printf("\nUnsigned Short Integer data type = %d bytes", sizeof(unsigned short));
	printf("\nUnsigned Integer data type = %d bytes", sizeof(unsigned int));
	printf("\nUnsigned Long Integer data type = %d bytes", sizeof(unsigned long));
	printf("\nLong Double Precision data type = %d bytes", sizeof(long double));
	return 0;
}
