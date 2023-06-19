#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);  /* The character is lowercase */
	}
	else
	{
		return (0);  /* The character is not lowercase */
	}
}
