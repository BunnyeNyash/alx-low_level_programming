#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* The character is an alphabetic character */
	}
	else
	{
		return (0); /* The character is not an alphabetic character */
	}
}
