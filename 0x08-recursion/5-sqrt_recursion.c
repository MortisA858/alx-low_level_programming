#include "main.h"


/**
 * nairobi - function that will help solve the _sqrt_recursion
 * @i: the number that will determine if it's a square root
 * @j: increment. It compare against 'i'
 *
 * Return: -1 if no square root, else natural square root.
 */
int nairobi(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	return (nairobi(i, j + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 *
 * Return: -1 if no square root, else natural square root
 */
int _sqrt_recursion(int n)
{
	return (nairobi(n, 1));
}
