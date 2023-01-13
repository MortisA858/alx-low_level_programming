#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: arguement count
 * @av: pointer to arguements
 *
 * Return: pointer to new space in memory or NULL if it fails
 **/
char *argstostr(int ac, char **av)
{
	char *string;
	int x, y, z, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			size++;
		size++;
	}
	size++;
	string = malloc(sizeof(char) * size);
	if (string == NULL)
		return (NULL);
	z = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			string[z++] = av[x][y];
		}
		string[z++] = '\n';
	}
	string[z] = '\0';
	return (string);
}
