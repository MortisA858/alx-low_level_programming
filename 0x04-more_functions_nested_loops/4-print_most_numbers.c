#include "main.h"

/**
 * print_most_numbers - function that print number 0 to 9 followed by new line
 * 
 * Description: Print the numbers omitting 2 and 4.
 * 
 * Return: Number 0 to 9.
 */
void print_most_number(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (!(i == 2 || i == 4))
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
