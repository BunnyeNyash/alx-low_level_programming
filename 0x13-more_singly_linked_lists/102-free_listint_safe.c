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

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		next = current->next;

		/* Free the current node */
		free(current);

		if (next >= current)
			break;

		/* Move to the next node */
		current = next;
	}

	/* Set the head to NULL */
	*h = NULL;

	return (count);
}
