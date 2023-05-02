#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list, handling loops
 * @head: Pointer to the beginning of the list.
 *
 * Return: Number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
		head = head->next;
	}
	return (count);
}
