#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return 0 (Success)
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("Size of char: %lu byte(s)\n", sizeof(d));
	printf("Size of int: %lu byte(s)\n", sizeof(a));
	printf("Size of long int: %lu byte(s)\n", sizeof(b));
	printf("Size of long long int: %lu bytes(s)\n", sizeof(c));
	printf("Size of float: %lu byte(s)\n", sizeof(e));

	return (0);
}

