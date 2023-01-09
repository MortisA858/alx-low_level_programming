#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: represents the pointer to the block of memory to fill
 * @b: represents the character to fill s
 * @n: unsigned int variable the number of bytes to be filled
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
