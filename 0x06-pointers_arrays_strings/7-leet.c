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
		char x[] = "aAeEoOtTlL";
		char y[] = "4433007711";

		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; j < 10; j++)
			{
				if (s[i] == x[j])
				{
					s[i] = y[j];
				}
			}	
		}
		return (s);
}
