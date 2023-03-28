#include "main.h"
#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				n = n / i;
			}
		}
	}
	printf("%ld\n", i - 1);
	return (0);
}
