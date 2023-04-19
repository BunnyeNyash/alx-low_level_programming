#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *  @name: The name to be printed.
 *  @f: A pointer to a function that prints a name.
 */

void print_name(char *name, void (*f)(char *))
{
	printf("Hello, my name is %s\n", name);
	return;
	f(name);
}
