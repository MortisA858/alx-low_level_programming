#include <stdio.h>
#include "main.h"

/**
 * main -  program that finds and prints the largest prime factor of a number
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int i, num = 612852475143;

	for (i = 3; i < 782849; i += 2)
	{
		while ((num % i == 0) && (num != i))
			num = num / i;
	}
	printf("%lu\n", num);
	return (0);
}
