#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: NULL if str = NULL, else pointer to array.
 */
char *_strdup(char *str)
{
	char *string;
	int x, y;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	x++;
	string = malloc(sizeof(*str) * x);
	if (string == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
	{
		string[y] = str[y];
		y++;
	}
	return (string);
}
