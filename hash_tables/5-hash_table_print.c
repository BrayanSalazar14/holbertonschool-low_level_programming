#include "hash_tables.h"

/**
 * hash_table_print - Prints the content of a hash table.
 * @ht: Pointer to the hash table.
 *
 * This function prints the content of a hash table in the format:
 * {key1: value1, key2: value2, ...}
 *
 * @ht: A pointer to the hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (tmp != ht->array[i])
				printf(", ");

			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
