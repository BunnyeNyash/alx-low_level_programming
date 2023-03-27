#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int prev = 1;
	int curr = 2;
	int next;

	printf("%d, %d", prev, curr);

	for (int i = 2; i < 50; i++)
	{
		next = prev + curr;
		printf(", %d", next);
		prev = curr;
		curr = next;
	}
	printf("\n");

	return (0);
}
