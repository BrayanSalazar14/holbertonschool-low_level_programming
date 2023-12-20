#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 * @ht: Pointer to the hash table.
 * @key: Key string for which to retrieve the value.
 *
 * Return: A pointer to the value associated with the key, or NULL if the key
 *         is not found or if the hash table or key is invalid.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}
