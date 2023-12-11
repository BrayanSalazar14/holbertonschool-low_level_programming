/*
 *Author: Brayan Steven Salazar
 */

#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * This function traverses the linked list pointed to by 'h'
 * and counts the number of nodes (elements) in the list.
 *
 * @h: Pointer to the head of the linked list.
 * Return: The number of nodes in the linked list.
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t count;

	ptr = h;
	count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
