#include "main.h"

/**
 * print_numbers - function that print numbers from 0 to 9 followed by new line
 * _putchar: function to be used in the code
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
