#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: resulting string
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"

	for (i = 0; *(s + i); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{	
			for (j = 0; j < 52; j++)
			{
				 if (a[j] == *(s + i))
				 {
					 *(s + i) = b[j];
					 break;
				 }
			}
		}
	}
	return (s);
}
