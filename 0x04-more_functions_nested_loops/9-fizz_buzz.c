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

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
