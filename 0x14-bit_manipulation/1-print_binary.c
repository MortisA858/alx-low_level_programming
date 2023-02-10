#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: unsigned long int n
 *
 * Return: binary representation of a number
 */

void print_binary(unsigned long int n)
{
	int i;
	int flag = 0;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		if ((n & (1UL << i)) != 0)
		{ /* check if the i-th bit is set */
			putchar('1');
			flag = 1;
		}
		else if (flag == 1)
		{
			putchar('0');
		}
	}
	if (flag == 0)
	{
		putchar('0');
	}
}
