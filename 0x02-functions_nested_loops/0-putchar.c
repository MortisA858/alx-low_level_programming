#include "main.h"

/**
 * main - print _putchar
 *
 * Author: AlgoSierra
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar";

	while(*str)
        {
	       	_putchar(*str);
		str++;
	}
	_putchar('\n');

	return (0);
}
