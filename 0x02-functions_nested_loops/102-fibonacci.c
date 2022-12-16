
#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers
 * Return: Nothing.
 */
int main(void)
{
	unsigned long count, x, y, z;

	x = 0;
	y = 1;
	for (count = 0; count < 50; count++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu", z);
		if (count == 49)
			putchar('\n');
		else
			printf(", ");
	}
	return (0);
}
