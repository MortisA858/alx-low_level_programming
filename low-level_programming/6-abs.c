#include "main.h"

/**
 * _abs - calculatethe absolute value of the number from 0.
 * @i: intefer to be converted
 * Return: Always 0 (Success)
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
