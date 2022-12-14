#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'z';
	int i = 26;

	while (i > 0)
		putchar(ch);
		ch--;
		i--;
	putchar('\n');
	return (0);
}
