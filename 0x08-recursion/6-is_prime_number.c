#include "main.h"


/**
 * check - checks to see if number is prime
 * @a: the starting value for the search
 * @b:the ending value for the search
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int check(int a, int b)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}
	else
	{
		return (check(a + 1, b));
	}
}



/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 *
 *  Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
