#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return:the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0; /* variable to store the result */
	int i, len;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b); /* get the length of the string */

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{ /* if the current char is not 0 or 1 */
			return (0);
		}
		result = result * 2 + (b[i] - '0');
		/* above code converts the binary number to decimal */
	}

	return (result);
}
