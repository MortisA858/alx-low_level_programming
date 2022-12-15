#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int x, y;

	y = 0;

	while(y < 10)
	{
		for(x = 'a'; x <= 'z'; x++)
		{
			_putchar('x');
		}
	}	
	y++;
    	_putchar('\n');
}
