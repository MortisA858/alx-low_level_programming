#include <stdio.h>

/**
 * main - Entry point
 *
 * Return : Accept 0 (Success)
 */

int main(void)
{
	int x

	for (x = 'A'; x <= 'Z'; x++)
	{
		int x_lower = tolower(x);
		putchar(x_lower);
	}
	
	return (0);
}
