/*
 *Author: Brayan Steven Salazar
 */

#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index
 * in a doubly linked list.
 * @head: Pointer to the pointer of the list's head.
 * @index: Index at which the node should be deleted.
 *
 * Return: 1 if deletion is successful
 * -1 if the list is empty or index is out of bounds.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	ptr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}

	count = 0;
	while (ptr != NULL)
	{
		if (count == index)
		{
			if (ptr->prev != NULL)
				ptr->prev->next = ptr->next;

			if (ptr->next != NULL)
				ptr->next->prev = ptr->prev;

			free(ptr);
			return (1);
		}
		count++;
		ptr = ptr->next;
	}
	return (-1);
}
