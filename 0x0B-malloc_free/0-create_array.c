#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @c: char to be initialized with
 * @size: size of the array
 *
 * Return: NULL if size = 0, pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
