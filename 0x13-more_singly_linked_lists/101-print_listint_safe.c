#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the beginning of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *p, *q;
	size_t count = 0;

	p = head;
	q = head;

	while (p)
	{
		printf("[%p] %d\n", (void *)p, p->n);

		p = p->next;

		if (p && p >= q)
		{
			printf("-> [%p] %d\n", (void *)p, p->n);
			exit(98);
		}

		q = q->next;
		if (q)

			q = q->next;
	}

	return (count);
}
