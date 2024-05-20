#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers using
 *             the Jump search algorithm.
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if value is not present in list or if list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    listint_t *prev = NULL;
    size_t jump, i;

    if (list == NULL)
        return (NULL);

    jump = sqrt(size);
    while (list->index < size && list->n < value)
    {
        prev = list;
        for (i = 0; list->next && i < jump; i++)
            list = list->next;
        printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, list->index);
    for (i = prev->index; i <= list->index && prev->n < value; i++)
    {
        printf("Value checked at index [%lu] = [%d]\n", i, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}

