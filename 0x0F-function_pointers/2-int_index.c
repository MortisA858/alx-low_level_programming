#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * return index of first element for which the cmp function does'nt return 0
 * @array: array to be searched
 * @size: is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
			{
				return (x);
			}
		}
	}
	return (-1);
}
