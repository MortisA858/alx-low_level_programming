#include "main.h"

/**
 * print_most_numbers function that print number 0 to 9 followed by new line
 * _putchar: function that is used in the code
 * @2: Number to skip
 * @4: Number to skip
 * Return: Number 0 to 9.
 */
void print_most_number(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
