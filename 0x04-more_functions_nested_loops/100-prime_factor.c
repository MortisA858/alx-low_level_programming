#include <stdio.h>
#include "main.h"

/**
 * main -  program that finds and prints the largest prime factor of a number
 * Return: Always 0.
 */

int main(void)
{
	long int num = 612852475143;
	int prime_num;

	for (prime_num = 2; prime_num <= sqrt(num); prime_num++)
	{
		if (num % prime_num == 0)
		{
			num = num / prime_num;
			prime = 1;
		}
	}
	printf("%ld\n", num);
	return (0);
}
