#include "main.h"

/**
 * int _islower(int c) - checks for lowercase character.
 *
 * Author: AlgoSierra
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
