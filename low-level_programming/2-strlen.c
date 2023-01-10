#include "main.h"

/**
 * _strlen - returns the length of the screen
 * @s: input
 *
 * Return: Output.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != 0)
	{
		i++;
		s++;
	}

	return (i);
}
