#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}


/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}


/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value of string
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!_isdigit(s[i]))
		{
			printf("Error\n");
			exit(98);
		}
		result = result * 10 + s[i] - '0';
	}
	return (sign * result);
}



/**
 * main - multiplies two positive numbers
 * @argc: number of arguments passed
 * @argv: array of argument strings
 *
 * Return: 0 if successful, 98 if an error occurred
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	char *s1, *s2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	s1 = argv[1];
	s2 = argv[2];

	if (_strlen(s1) == 0 || _strlen(s2) == 0)
	{
		printf("Error\n");
		return (98);
	}

	num1 = _atoi(s1);
	num2 = _atoi(s2);

	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
