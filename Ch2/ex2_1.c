#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(void)
{
	printf("The max value of signed char is %d.\n", SCHAR_MAX);
	printf("The min value of signed char is %d.\n", SCHAR_MIN);
	printf("The max value of unsigned char is %u.\n", UCHAR_MAX);

	
	printf("The max value of short is %d.\n", SHRT_MAX);
	printf("The min value of short is %d.\n", SHRT_MIN);
	printf("The max value of unsigned short is %u.\n", USHRT_MAX);
	
	printf("The max value of int is %d.\n", INT_MAX);
	printf("The min value of int is %d.\n", INT_MIN);
	printf("The max value of unsigned int is %d.\n", UINT_MAX);
	
	printf("The max value of long is %1d.\n", LONG_MAX);
	printf("The min value of long is %1d.\n", LONG_MIN);
	printf("The max value of unsigned long is %1u.\n", ULONG_MAX);

	return EXIT_SUCCESS;
}