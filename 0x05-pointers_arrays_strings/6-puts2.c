#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: input
 * Return: Output
 */
void puts2(char *str)
{
	int count = 0;
	int i = 0;
	char *j = str;
	int k;

	while (*j != '\0')
	{
		j++;
		count++;
	}
	i = count - 1;
	for (k = 0; k <= i; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
