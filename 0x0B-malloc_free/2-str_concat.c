#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: contents to be pointed to, in the newly allocated space in memory
 * @s2: contents to be pointed to, in the newly allocated space in memory
 *
 * Return: NULL on failure, else contents in memory space
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	str = malloc(sizeof(char) * (x + y + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	x = y = 0;
	while (s1[x] != '\0')
	{
		str[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		str[x] = s2[y];
		x++, y++;
	}
	str[x] = '\0';
	return (str);

}
