#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string of characters to match against
 *
 * Return: number of bytes in the initial segment of s that
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				i++;
				break;
			}
			else if ((accept[j + 1]) == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
