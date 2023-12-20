#include "hash_tables.h"

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

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;
	
	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new_node = hash_newNode(key, value);

	if (new_node == NULL)
		return (0);

	tmp = ht->array[index];

	if (tmp == NULL)
		ht->array[index] = new_node;

	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new_node;
	}
	return (1); 
}
