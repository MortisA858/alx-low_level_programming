#include "main.h"

/**
 * main - print_putchar
 *
 * Return: 0
 */

int main(void)
{
	char wording[] = {'_','p','u','t','c','h','a','r'};
	int x = 0;

	while(x < 9)
	{
		_putchar(wording[x]);
		x = x + 1;
	}

	_putchar("\n");

	return (0);
}
