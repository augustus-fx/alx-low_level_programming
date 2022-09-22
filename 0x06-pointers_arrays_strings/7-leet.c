#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "44333007711";

	for (i = 0; *(s + i); i++)
	{
		for (i = 0; j <= 9; j++)
		{
			if (a[i] == *(s + i))
				*(s + i) = b[i];
		}
	}
	return (s);
}
