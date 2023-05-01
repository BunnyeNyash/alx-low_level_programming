#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer to pointer to the first node of the list
 *
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL)
		exit(98);

	current = *h;

	while (current != NULL)
	{
		count++;

		/* Check if we are in a loop */
		if (current <= next)
		{
			*h = NULL;
			exit(98);
		}

		next = current->next;

		/* Free the current node */
		free(current);

		/* Move to the next node */
		current = next;
	}

	/* Set the head to NULL */
	*h = NULL;

	return (count);
}
