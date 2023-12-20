#include "hash_tables.h"

/**
 * hash_newNode - Creates a new hash node.
 * @key: Key string for the new node.
 * @value: Value string for the new node.
 *
 * Return: A pointer to the new hash node, or NULL on failure.
 */
hash_node_t *hash_newNode(const char *key, const char *value)
{
	hash_node_t *newNode;

	newNode = malloc(sizeof(hash_node_t));

	if (newNode == NULL)
		return (NULL);

	newNode->key = strdup(key);

	if (newNode->key == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->value = strdup(value);

	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (NULL);
	}

	newNode->next = NULL;
	return (newNode);

}

/**
 * hash_table_set - Adds a key-value pair to a hash table.
 * @ht: Pointer to the hash table.
 * @key: Key string to be added.
 * @value: Value string associated with the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new_node = hash_newNode(key, value);

	if (new_node == NULL)
		return (0);


	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
