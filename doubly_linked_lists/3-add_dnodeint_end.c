/*
 *Author: Brayan Steven Salazar
 */

#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to the pointer of the list's head.
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the newly added node, or NULL if memory allocation fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}

	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new_node;
	new_node->prev = ptr;
	return (new_node);
}
