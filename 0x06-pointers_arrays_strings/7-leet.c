#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to be encoded.
 *
 * Return: The encoded string.
 */

char *leet(char *s)
{
	int i, j;
	char leet[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; leet[j]; j++)
		{
			if (s[i] == leet[j])
			{
				s[i] = replace[j];
				break;
			}
		}
	}
	return (s);
}
