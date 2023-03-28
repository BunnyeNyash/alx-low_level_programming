#include "main.h"
#include <stdio.h>

/**
 * print_number - function prints an integer
 * @n:.input integer parameter
 *
 *Return: void
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
		putchar(i % 10 + '0');
	}
	putchar('\n');
}
