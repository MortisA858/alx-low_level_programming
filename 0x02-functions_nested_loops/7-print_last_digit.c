#include "main.h"

/**
 * print_last_digit - function to print the last digit of a number
 * @i: it's the int that will be used for the argument of the function
 * Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
	int last_num = n % 10;

	if (last_num < 0)
		last_num *= -1;
	_putchar(last_num + '0');
	return (last_num);
}
