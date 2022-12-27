#include "main.h"

/*
 * _strcmp - a function that compares string values
 * s1: input value
 * s2: input value
 *
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
