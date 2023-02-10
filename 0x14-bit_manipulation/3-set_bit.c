#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @index:  is the index, starting from 0 of the bit you want to set
 * @n: pointer
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{ /* check if index is within the size of unsigned long int */
		return (-1); /* return -1 if index is out of bounds */
	}

	*n |= (1UL << index); /* set the index-th bit to 1 */
	return (1); /* return 1 to indicate success */
}
