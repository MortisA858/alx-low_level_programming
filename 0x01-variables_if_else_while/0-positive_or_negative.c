#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */ 

/* betty style doc for function main goes there */
/**
 * Main - Entry point.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is positive\n", rand());
	}

	else if (n < 0)
	{
		printf("%d is negative\n", rand());
	}

	else
	{
		printf("%d is zero\n", rand());
	}



	return (0);
}

