#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list, handling loops
 * @head: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr = head, *temp = NULL;
	size_t count = 0;

	while (curr)
	{
		printf("[%p] %d\n", (void *) curr, curr->n);
		count++;

		if (curr > curr->next)
			curr = curr->next;
		else
		{
			temp = curr;
			curr = curr->next;
			printf("-> [%p] %d\n", (void *) temp, temp->n);
			break;
		}
	}
	if (!curr)
		return (count);
	else
		return (98);
}
