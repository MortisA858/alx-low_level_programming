#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return : Accept 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	int i = 0;
	/* your code goes there */
	while (i < 26)
	{
		putchar(ch);
		ch++;
		i++;
	}
	putchar('\n');
	return (0);
}
