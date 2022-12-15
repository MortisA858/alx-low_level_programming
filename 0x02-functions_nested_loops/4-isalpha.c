#include "main.h"

/**
 * _isalpha - function to checks if c is a letter, lowercase or uppercase
 * 
 * @c: is the int that will be used for the argument
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
