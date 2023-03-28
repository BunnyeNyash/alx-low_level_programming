#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints the numbers from 1 to 100,
 * followed by a new line, print Fizz for multiples of three
 * print Buzz for the multiples of five
 * print FizzBuzz for numbers multiples of both three and five
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}

		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
