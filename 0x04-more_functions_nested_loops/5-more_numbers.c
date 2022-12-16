#include "main.h"

/**
 * more_numbers - function prints number 0 to 14 10 times
 *
 * Description: Number 0 to 14 are printed 10 times
 *
 * Return: 0 to 14
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
