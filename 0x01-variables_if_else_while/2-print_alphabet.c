#include <stdio.h>

/**
 * main - Entry point
 *
 * Return : Accept 0 (Success)
 */

int main()
{
	for (char x = 'a'; x <= 'z'; x++)
	{
		char lower = tolower(x);
		putchar(lower);
	}
	
	return (0);
}
