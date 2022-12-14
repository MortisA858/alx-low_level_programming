#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char ch = '0';
	int i = 0;

	while (i < 10)
	{
		putchar(ch);
		ch++;
		i++;
	}
	putchar('\n');
	return (0);
}
