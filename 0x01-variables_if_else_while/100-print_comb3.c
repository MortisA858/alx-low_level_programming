#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int u = 49;
	int d = 48;
	int pos_u = 49;

	while (d <= 56)
	{
		while (u <= 57)
		{
			putchar(d);
			putchar(u);
			if (d != 56 || u != 57)
			{
				putchar(',');
				putchar(' ');
			}
			u++;
		}
		d++;
		pos_u++;
		u = pos_u;
	}
	putchar('\n');
	return (0);
}
