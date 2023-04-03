#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to be searched
 * @c: The character to be located in the string
 *
 * Return: A pointer to the first occurrence of the character c in string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
			return (s + i);
		{
			if (c == s[i])
				return (s + i);
		}
	}
	return (NULL);
}
