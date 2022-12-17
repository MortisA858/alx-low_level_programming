#include "main.h"
/**
 * print_number - functin that prints integers
 * @i: this acts as an input integer parameter
 * Return: 0
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar(45);
		x = -x;
	}
	if (x / 10)
	{
		print_number(x / '0');
	}
	_putchar(x % 10 + '0');
}
