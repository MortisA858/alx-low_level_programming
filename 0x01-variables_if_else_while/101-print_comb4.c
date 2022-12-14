#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 50;
	int y = 49;
	int z = 48;
	int pos_x = x;
	int pos_y = y;
	int sop_x = x;

	while z <= 55)
	{
		while (y <= 56)
		{
			while (x <= 57)
			{
				putchar(z);
				putchar(y);
				putchar(x);
				if (z != 55 || y != 56 || x != 57)
				{
					putchar(',');
					putchar(' ');
				}
			x++
			}
			
		}
		pos_x = sop_x;
		pos_x++;
		sop_x++;
		x = pos_x;
		pos_y++;
		y = pos_y;
		z++;
	}
	putchar('\n');
	return (0);	
}
