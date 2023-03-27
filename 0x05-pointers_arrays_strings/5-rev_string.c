# include "main.h"

/**
 * rev_string - function reverses a string
 * @s: Pointer to the string to be reversed
 *
 * Return: string and in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int i, len = 0;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		len--;
		rev = s[i];
		s[i] = s[len];
		s[len] = rev;
	}
}
