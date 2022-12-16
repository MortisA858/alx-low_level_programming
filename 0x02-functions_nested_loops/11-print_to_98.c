#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints natural numbers from n to 98, adds new line.
 * @n: First that begins the count
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for  (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", n);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
