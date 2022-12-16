#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			j++;
	printf("%d\n", j);
	return (0);
}
