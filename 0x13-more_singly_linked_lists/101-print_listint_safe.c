#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list, handling loops
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *temp;
	size_t count = 0;

	current = head;
	temp = head;

	while (temp != NULL && temp->next != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		current = current->next;
		temp = temp->next->next;

		if (current == temp)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			count++;
			break;
		}
	}

	if (temp == NULL || temp->next == NULL)
	{
		while (current != NULL)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			count++;
			current = current->next;
		}
	}

	return (count);
}
