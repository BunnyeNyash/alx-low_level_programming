#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * binary_search - Searches for a value in a sorted array
 * of intergers using binary search.
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: if the value is not present or the array is Null, -1,
 * otherwise, the index where the value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (x = low; x <= high; x++)
			printf("%i%s", array[x], x == high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
