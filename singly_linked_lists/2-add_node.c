/*
 *Author: Brayan Steven Salazar
 */

#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Pointer to the pointer of the list's head.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Pointer to the newly added node, or NULL if memory allocation fails
 *         or string duplication fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t count;

	count = strlen(str);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = count;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
