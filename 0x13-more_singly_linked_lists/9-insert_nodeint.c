#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head node of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The value to store in the new node.
 *
 * Return: If memory allocation fails or idx is invalid, NULL.
 *         Otherwise, the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node, *next_node;
	unsigned int node_idx = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	prev_node = *head;
	next_node = (*head)->next;

	while (prev_node && node_idx < idx - 1)
	{
		prev_node = next_node;
		if (next_node)
			next_node = next_node->next;
		node_idx++;
	}

	if (node_idx != idx - 1)
	{
		free(new_node);
		return (NULL);
	}

	prev_node->next = new_node;
	new_node->next = next_node;

	return (new_node);
}
