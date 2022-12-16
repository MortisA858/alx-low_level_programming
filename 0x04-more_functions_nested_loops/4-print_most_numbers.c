#include "main.h"

/**
 * print_most_numbers - function that print number 0 to 9 followed by new line
 * Description: Print the numbers omitting 2 and 4.
 * Return: Number 0 to 9.
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
