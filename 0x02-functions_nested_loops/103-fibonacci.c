#include <stdio.h>

/**
 * main - program prints the sum of even-valued Fibonacci sequence
 * terms not exceeding 4000000.
 *
 * Return: Always 0
 */

int main(void)
{
	int prev = 1;
	int curr = 2;
	int next = 0;
	int sum = 2; /* Start with 2 as the first even term in the sequence */

	while (next <= 4000000)
	{
		next = prev + curr;
		prev = curr;
		curr = next;
		if (next % 2 == 0)
		{
			sum += next;
		}
	}
	printf("%d\n", sum);

	return (0);
}
