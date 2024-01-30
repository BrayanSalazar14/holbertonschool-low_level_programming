#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 *
 * This function searches for a given value in an array using linear search.
 * It iterates through the array from the beginning to the end, comparing each
 * element with the target value until a match is found or the end of the array
 * is reached.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: Index of the target value if found, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!*array)
		return (-1);

	while (i < size && value != array[i])
		i++;

	if (i < size)
		return (i);
	else
		return (-1);
}
