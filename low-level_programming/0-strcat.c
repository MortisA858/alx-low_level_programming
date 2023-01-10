#include "main.h"

/**
 * *_strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * (CONCAT 2 STRING)
 *
 * @dest: (char)destination string
 * @src: (char)source string
 *
 * Return: (char) pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (s);
}
