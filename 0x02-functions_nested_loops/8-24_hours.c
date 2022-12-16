#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * Return: 0
 */
void jack_bauer(void)
{
	int hrs = 0;
	int min = 0;
	int hrs_rem;
	int min_rem;

	while (hrs <= 23){
		while (min <= 59){
		min_rem = min % 10;
		hrs_rem = hrs % 10;
		_putchar(hrs / 10 + '0');
		_putchar(hrs_rem + '0');
		_putchar(':');
		_putchar(min / 10 + '0');
		_putchar(min_rem + '0');
		min++;
		_putchar('\n');
	}
		hrs++;
		min = 0;
	}
}
