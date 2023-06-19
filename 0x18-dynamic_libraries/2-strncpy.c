#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * @n: Number of characters to copy from src
 *
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
