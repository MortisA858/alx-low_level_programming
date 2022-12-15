#include "main.h"

/**
 * Author: AlgoSierra
 *
 * print_sign - prints the sign of a number
 * @n: int to be used for the argument of the function
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0){
		_putchar(+);
		return (1);
	}
	else if (n < 0){
		_putchar(-);
		return (-1)
	}
	else
		return (0);
}
