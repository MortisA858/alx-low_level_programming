#include "main.h"

/**
 * _isdigit - function that check for a digit 0 through 9.
 * @c: checked digit
 * Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
