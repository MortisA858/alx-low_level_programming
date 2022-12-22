#include "main.h"

/**
 * _strncpy - use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: char
 * @src: char
 * *@n: it's an int
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
