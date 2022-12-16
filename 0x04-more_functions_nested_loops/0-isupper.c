#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * 
 * Return: 1 if c is uppercase.
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
