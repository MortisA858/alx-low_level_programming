#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input
 *
 * Return: output
 */
void puts_half(char *str)
{
	int i, j, count;

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	j = (count / 2);
	if ((count % 2) == 1)
	{
		j = ((count + 1) / 2);
	}
	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
