#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 * 
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int x;

	for ( x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');

	return (0);
}
