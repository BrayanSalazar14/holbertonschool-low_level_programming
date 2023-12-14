/*
 *Author: Brayan Steven Salazar
 */

#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a doubly linked list.
 * @head: Pointer to the pointer of the list's head.
 * @index: Index at which the node should be deleted.
 *
 * Return: 1 if deletion is successful
 * -1 if the list is empty or index is out of bounds.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *clean;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		clean = *head;
		*head = (*head)->next;
		free (clean);
		return (1);
	}

	ptr = *head;
	count = 0;
	while (ptr != NULL)
	{
		if (count == index)
		{
			clean = ptr;
			ptr = ptr->next;
			clean->prev->next = ptr;
			if (ptr != NULL)
			{
				ptr->prev = clean->prev;
			}
			free (clean);
			return(1);
		}
		count++;
		ptr = ptr->next;
	}
	return (-1);
}
