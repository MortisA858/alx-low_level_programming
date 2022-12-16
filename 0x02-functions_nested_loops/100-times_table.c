#include "main.h"
/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 * Return: 0
 */
void print_times_table(int n)
{
	int i, j, result;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j<= n; j++)
			{
			result = (i * j);
			if ( j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((result % 10) + '0');
			}
			else if (result >= 10 && result < 100)
			{
				_putchat(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result >= 100 && j != 0)
			{
				_putchar((result / 100) + '0');
				_putchar((result / 10) % 10 + '0');
				_putchar((result % 10) + '0');
			}
			else
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
