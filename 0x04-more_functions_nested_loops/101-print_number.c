#include "main.h"
/**
 * print_number - functin that prints integers
 * @i: this acts as an input integer parameter
 * Return: 0
 */
void print_number(int i)
{
	unsigned int i = j;

	if (i < 0)
	{
		_putchar(45);
		j = -j;
	}
	if (j / 10)
	{
		print_number(j / '0');
	}
	_putchar(j % 10 + '0');
}
