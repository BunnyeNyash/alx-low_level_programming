#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of a listint_t linked list.
 * @head: pointer to the head node of the list
 *
 * Return: sum of all the data, or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
