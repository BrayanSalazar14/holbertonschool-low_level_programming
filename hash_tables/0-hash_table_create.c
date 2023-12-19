#include "hash_table.c"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table
 *	or NULL if an error occurred.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **h_node;
	hash_table_t *h_table;

	h_node = malloc(size * sizeof(hash_node_t));

	if (h_node == NULL)
		return (NULL);

	h_table = malloc(sizeof(hash_table_t));

	if (h_table == NULL)
	{
		free(h_node);
		return (NULL);
	}

	h_table->size = size;
	h_table->array = h_node;

	return (h_table);
}
