#include "main.h"

/**
 * swap_int - it swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: Output.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
