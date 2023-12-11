/*
 *Author: Brayan Steven Salazar
 */

#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t count;

	ptr = h;
	count = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;
		count++;
	}
	return (count);
}
