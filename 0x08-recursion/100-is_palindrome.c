#include "main.h"

/**
 * rome1 - obtains length of a
 * @a: string
 * @l: integer. Counts length
 *
 * Return: 1, On error, -1, and errno is set appropriately.
 */
int rome1(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (rome1(a + 1, l + 1));
}

/**
 * rome2 - compares string vs string reverse
 * @a: string
 * @l: length
 *
 * Return: On Success 1, On Error, -1
 * and errno is set appropriately.
 */

int rome2(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (rome2(a + 1, l - 2));
}

/**
 * is_palindrome - function that returns 1 if string is palindrome and 0 if not
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int l;

	l = rome1(s, 0);
	return (rome2(s, l));
}
