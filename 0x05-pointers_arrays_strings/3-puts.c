#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to printed
 *
 * Return: Output.
 */
void _puts(char *str)
{
	int count;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	for (count--; count >= 0; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');	
}
