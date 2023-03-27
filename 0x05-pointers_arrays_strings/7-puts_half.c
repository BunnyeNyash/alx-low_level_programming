#include <stdio.h>

/**
 * puts_half - Prints half of a string.
 * @str: The string to print the second half of.
 */

void puts_half(char *str)
{
	int length = 0, half_length, i;

	while (str[length] != '\0')
		length++;

	half_length = (length + 1) / 2;

	for (i = half_length; i < length; i++)
		putchar(str[i]);

	putchar('\n');
}
