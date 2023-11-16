/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - Function that creates an array of chars
 *and initializes it with a specific char
 *@size: Size of the array to create
 *@c: Character used to initialize each element of the array
 *Return: A pointer to the array or NULL if creation fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	char *array;

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);


}
