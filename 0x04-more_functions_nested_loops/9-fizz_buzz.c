#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: print the number 1-100.
 * Fizz multiple of 3, Buzz multiple of 5
 * FizzBuzz for mulltiples of both of them.
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; 1 <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
