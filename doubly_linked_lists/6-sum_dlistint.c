/*
 *Author: Brayan Steven Salazar
 */

#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all elements in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Description:
 * This function traverses the doubly linked list starting from the head and
 * computes the sum of all the elements in the list.
 *
 * Return: Sum of all elements in the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum;

	ptr = head;
	sum = 0;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
