#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a newline.
 * @s: The string to print in reverse.
 *
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i, len = 0;

	while (*(s + len))
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));

	_putchar('\n');
}
