#include <stdio.h>
/**
 * main - it prints first 98 fibonacci number
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long a, b, c;
	unsigned long x, y, z, carry;

	count = 0;
	a = 0;
	b = 1;
	for (count = 1; count <= 91; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}
	x = a % 1000;
	a = a / 1000;
	y = b % 1000;
	b = b / 1000;
	while (count <= 98)
	{
		carry = (x + y) / 1000;
		z = (x + y) - carry * 1000;
		c = (a + b) + carry;
		x = y;
		y = z;
		a = b;
		b = c;
		if (z >= 100)
			printf("%lu%lu", c, z);
		else
			printf("%lu0%lu", c, z);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);

}
