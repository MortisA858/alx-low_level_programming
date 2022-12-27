#include "main.h"

/**
 * leet - encode string into 1337
 * @n: input value
 *
 * Return: n value
 */
char *leet(char *s)
{
		int i;
		int j;
		int k;

		char x[] = "aAeEoOtTlL";
		char y[] = "0011334477";

		i = 0;
		while (s[i] != '\0')
		{
			j = 0;
			k = 0;
			while (x[j] != '\0')
			{
				if (s[i] == x[j])
				{
					k = j;
					s[i] = y[k];
				}
				j++;
			}
			i++;
		}
		return (s);
}
