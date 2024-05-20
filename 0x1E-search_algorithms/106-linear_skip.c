#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if value is not present in list or if list is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *prev = NULL, *skip = NULL;

    if (list == NULL)
        return (NULL);

    skip = list->express;
    while (skip != NULL && skip->n < value)
    {
        prev = skip;
        skip = skip->express;
        if (skip != NULL)
            printf("Value checked at index [%lu] = [%d]\n", skip->index, skip->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, skip->index);
    while (prev != NULL && prev->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}
