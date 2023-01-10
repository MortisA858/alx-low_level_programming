#include <stdio.h>

/**
 * main - main entry point
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to char
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
