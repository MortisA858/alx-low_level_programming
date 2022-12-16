#include <stdio.h>
/**
 * main - sum of even-valued fibonacci numbers under 4 million
 * Return: 0
 */
int main(void)
{
	unsigned long count, x, y, z, sum;

	x = sum = 0;
	y = 1;
	for (count -0; count < 50; count ++)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0 && z < 4000000)
			sum++ k;
	}
	printf("%lu\n", sum);
	return;
}
