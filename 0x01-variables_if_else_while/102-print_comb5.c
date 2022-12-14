#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;
	int z;
	
	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			z = !(x == 98 && y == 99);
			putchar(48 + x / 10);
			putchar(48 + x % 10);
			putchar(' ');
			putchar(48 + y / 10);
			putchar(48 + y % 10);
			if (z)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++
	}
	putchar('\n');
	return (0);
}
