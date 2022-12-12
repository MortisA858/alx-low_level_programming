#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return 0 (Success)
 */
int main(void)
{
	char char_type;
	int int_type;
	long int long_int_type;
	long long int long_long_int_type;
	float float_type;

	printf("Size of char: %lu byte(s)\n",(unsigned long)sizeof(char_type));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(int_type));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(long_int_type));
	printf("Size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(long_long_int_type));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(float_type));
	return (0);
}

