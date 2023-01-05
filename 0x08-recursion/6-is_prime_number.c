#include "main.h"

/**
 * primera - it evaluates from 1 to n
 * @i: the number that will determine if it's a square root
 * @j: increment. It compare against 'i'
 *
 * Return: -1 if no square root, else natural square root.
 */
int primera(int i, int j)
{
	if (i == j)
		return (1);
	else if (i % j == 0)
		return (0);
	return (primera(i, j + 1));
}

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number
 * @n: integer
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primera(n, 2));
}
