#include "main.h"

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int count, i;
	unsigned long fib1 = 1, fib2 = 2, sum;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		sum = fib1 + fib2;
		printf(", %lu", sum);

		fib1 = fib2;
		fib2 = sum;
	}
	printf("\n");
	return (0);
}
