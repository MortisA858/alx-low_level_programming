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
		char lower = tolower(x);
		putchar(lower);
	}
	
	return (0);
}
