#include "main.h"

/**
 * _strlen - function returns the length of a string
 * @s: calculates the length of a string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
