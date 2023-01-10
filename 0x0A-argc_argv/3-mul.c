#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to char
 * Return: 0.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
