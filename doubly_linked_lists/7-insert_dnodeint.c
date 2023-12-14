/*
 *Author: Brayan Steven Salazar
 */

#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * in a doubly linked list.
 * @h: Pointer to the pointer of the list's head.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the newly inserted node, or NULL if memory allocation
 *	fails or if the index is out of bounds.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr, *prev;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	ptr = *h;
	count = 0;
	while (ptr != NULL)
	{
		if (count == idx)
		{
			prev = ptr->prev;
			new_node->next = ptr;
			new_node->prev = prev;
			ptr->prev = new_node;
			prev->next = new_node;
			return (new_node);
		}
		count++;
		prev = ptr;
		ptr = ptr->next;
	}

	if (count == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
