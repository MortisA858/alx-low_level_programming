#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input
 *
 * Return: output
 */
void puts_half(char *str)
{
	int i, j, k;

	k = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		k++;
	}

	j = (k / 2);
	if ((k % 2) == 1)
	{
		j = ((k + 1) / 2);
	}
	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
