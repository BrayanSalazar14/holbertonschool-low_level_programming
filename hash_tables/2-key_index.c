#include "hash_tables.h"

/**
 * key_index - generates an index using the djb2 algorithm
 * @key: pointer to the key (string) used for hashing
 * @size: size of the array/hash table
 *
 * Return: calculated index for the key within the specified size.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	const unsigned char *index = key;

	return (hash_djb2(index) % size);
}
