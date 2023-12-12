/*
 *Author: Brayan Steven Salazar
 */

#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list.
 * @h: Pointer to the first node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count;

	ptr = h;
	count = 0;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
