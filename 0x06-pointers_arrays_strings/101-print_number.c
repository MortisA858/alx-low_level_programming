#include "main.h"

/**
 * print_number - prints a integer
 * @n: integer
 *
 * Return: integer.
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	i = n;

	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
