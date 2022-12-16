#include "main.h"

/**
 * print_last_digit - function to print the last digit of a number
 * @i: it's the int that will be used for the argument of the function
 * Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
	if (i > 0 || i == 0)
	{
	_putchar (i % 10 + '0');
	return (i % 10);
	}
	else
	{
	i = i * -1;
	_putchar (c % 10 + '0');
	return (c % 10);
	}

}
