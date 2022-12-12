#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int 1;
	long int 2;
	long long int 11;
	char d;
	float 9;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of int: %lu byte(s)\n", sizeof(1));
	printf("Size of long int: %lu byte(s)\n", sizeof(2));
	printf("Size of long long int: %lu bytes(s)\n", sizeof(11));
	printf("Size of float: %lu byte(s)\n", sizeof(9));

	return (0);
}

