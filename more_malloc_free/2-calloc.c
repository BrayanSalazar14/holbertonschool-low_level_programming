/*
 *Author: Brayan Steven Salazar
 */

#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - Allocates memory for an array of nmemb elements of size bytes each,
 *           and initializes all the memory to zero.
 *@nmemb: Number of elements in the array.
 *@size: Size of each element in bytes.
 *
 *Return: A pointer to the allocated memory. If nmemb or size is 0,
 *        or if the allocation fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int num_size_elements;

	void *asignMemory;

	if (nmemb == 0 || size == 0)
		return (NULL);

	asignMemory = malloc(nmemb * size);

	if (asignMemory == NULL)
		return (NULL);

	num_size_elements = (nmemb * size);

	for (i = 0; i < num_size_elements; i++)
		*((char *)asignMemory + i) = 0;

	return (asignMemory);
}
