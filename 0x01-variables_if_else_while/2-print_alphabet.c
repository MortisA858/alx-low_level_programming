#include <stdio.h>

/**
 * main - Entry point
 *
 * Return : Accept 0 (Success)
 */

int main()
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		int lower = tolower(x);
		putchar(lower);
	}
	
	return (0);
}
