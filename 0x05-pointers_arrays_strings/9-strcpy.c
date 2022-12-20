#include "main.h"

/**
 * _strcpy - copies string(from pointer src to pointer dest)
 * @src: Input. Pointer to source string
 * @dest: Input. Pointer to destination for copy of string
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for (; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
