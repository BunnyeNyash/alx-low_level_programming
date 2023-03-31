#include <stdio.h>

/**
 * main - prints the value of integer variables
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 98;
	p = &a[2];

	/*
	 * write your line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 *   - you are not allowed to modify p
	 *   - only one statement
	 *   - you are not allowed to code anything else than this line of code
	 */

	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", *(p));
	return (0);
}
