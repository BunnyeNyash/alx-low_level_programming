#include "main.h"

/**
 * check - checks for the square root
 * @a: starting value for the search
 * @b: ending value for the search
 *
 * Return: square root of n, or -1 if n does not have a natural square root
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
