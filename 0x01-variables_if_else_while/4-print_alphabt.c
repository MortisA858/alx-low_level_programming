#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 26)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
		i++;
	}
	putchar('\n');
	return (0);
}
