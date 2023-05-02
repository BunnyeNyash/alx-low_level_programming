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
	const listint_t *current = head, *temp = NULL;
	size_t count = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *) current, current->n);
		count++;

		if (current > current->next)
			current = current->next;

		else
		{
			temp = current;
			current = current->next;
			printf("-> [%p] %d\n", (void *) temp, temp->n);
			exit(98);
		}
	}

	return (count);
}
