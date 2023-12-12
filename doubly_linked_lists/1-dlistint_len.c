/*
 *Author: Brayan Steven Salazar
 */

#include "lists.h"

/**
 * dlistint_len - Counts the number of nodes in a doubly linked list.
 * @h: Pointer to the first node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count;

	ptr = h;
	count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
