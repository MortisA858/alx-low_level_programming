#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main entry point
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to char
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
