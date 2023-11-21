/*
 *Author: Brayan Steven Salazar
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *array_range - Creates an array of integers in a specified range.
 *@min: The minimum value of the range.
 *@max: The maximum value of the range.
 *
 *This function creates an array of integers from 'min' to 'max'
 *(inclusive) and returns a pointer to the allocated memory.
 *
 *If 'min' is greater than 'max', the function returns NULL.
 *
 *Return: A pointer to the allocated memory containing the array.
 *        If allocation fails or 'min' is greater than 'max', returns NULL.
 */
int *array_range(int min, int max)
{
	int *array, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
