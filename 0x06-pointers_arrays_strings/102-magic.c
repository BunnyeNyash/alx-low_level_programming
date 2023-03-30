#include <stdio.h>

/**
 * main - prints the value of integer variables
 *
 * Return: Always 0.
 */

int main(void)
{
	int a[5];
	int *p;

	a[2] = 9;
	p = &a[2];

	/* your code goes here */
	printf("a[2] = %d\n", *(p));

	return (0);
}
