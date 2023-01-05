#include "main.h"

/**
 * _strlen_recursion - function that returns the factorial of a given number
 * @n: integer
 *
 * Return: factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
