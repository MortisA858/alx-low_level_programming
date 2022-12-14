#include <stdio.h>

/**
 * main - Entry point
 *
 * Return : Accept 0 (Success)
 */

int main(void)
{
	char x = 'a';
	int i = 0;
	/* Your code goes here */
	while (i < 26)
	{
		putchar(x);
		x++;
		i++;
	}
	putchar('\n');
	return (0);
}
