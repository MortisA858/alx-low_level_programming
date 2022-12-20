#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input
 *
 * Return: output
 */
void puts_half(char *str)
{
	int i, j;
	char k;

	for (i = 0; str[i] != 0; i++)
	{
	}
	if (i % 2 == 0)
	{
		for ((j = i / 2); str[j] != 0; j++)
		{
			k = str[j];
			_putchar(k);
		}
	}
	else
	{
		for ((j = (i - 1) / 2); str[j] != 0; j++)
		{
			k = str[j];
			_putchar(k);
		}
	}
	_putchar('\n');
}
