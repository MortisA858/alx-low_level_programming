#include "main.h"

/**
 * print_most_numbers function that print number 0 to 9 followed by new line
 * _putchar: function that is used in the code
 * @2: Number to skip
 * @4: Number to skip
 * Return: Always 0.
 */
int print_most_number(void)
{
	int i;

	int i;
	while(i <= 9)
	{
	if (i == 2 && i == 4)
	{
		continue
	}
		_putchar(i + '0');
		i++
	}
	_putchar('\n');
}
