#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and its contents.
 * @ht: Pointer to the hash table.
 *
 * This function deletes a hash table and frees the memory allocated for its
 * elements, keys, and values. It iterates through each index of the hash
 * table, freeing each linked list of nodes.
 *
 * @ht: A pointer to the hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *next;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = next;
		}
	}
	free(ht->array);
	free(ht);
}
