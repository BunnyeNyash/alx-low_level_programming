#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate (up to n bytes)
 * @n: maximum number of bytes to concatenate from s2
 *
 * Return: pointer to a newly allocated space in memory with s1 followed by s2
 * or NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	a = malloc(len1 + n + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		a[i] = s1[i];
	for (i = 0; i < n; i++)
		a[len1 + i] = s2[i];
	a[len1 + n] = '\0';

	return (a);
}
