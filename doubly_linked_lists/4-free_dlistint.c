/*
 *Author: Brayan Steven Salazar
 */

#include "lists.h"

/**
 * free_dlistint - Frees memory occupied by all nodes in a doubly linked list.
 * @head: Pointer to the beginning of the doubly linked list.
 *
 * Description:
 * This function frees memory occupied by all nodes in the doubly linked list
 * pointed to by 'head'. Nodes are freed one by one, and the 'head' pointer is
 * set to NULL after all nodes have been freed.
 *
 * Return: No return value.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	dlistint_t *clean;

	ptr = head;
	while (ptr != NULL)
	{
		clean = ptr;
		ptr = ptr->next;
		free(clean);
	}
}
