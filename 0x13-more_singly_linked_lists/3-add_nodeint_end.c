#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: A pointer to the head of the listint_t list
 * @n: The integer to store in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	/* Create new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* If list is empty, set new node as head */
	if (*head == NULL)
		*head = new_node;
	else
	{
		/* Traverse the list to the last node */
		current = *head;
		while (current->next != NULL)
			current = current->next;

		/* Add new node to the end */
		current->next = new_node;
	}

	return (new_node);
}
