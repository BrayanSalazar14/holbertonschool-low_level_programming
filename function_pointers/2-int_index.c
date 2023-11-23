/*
 *Author: Brayan Steven Salazar
 */

#include "function_pointers.h"

/**
 *int_index - Search for an element in an array satisfying a given condition.
 *
 *@array: Pointer to the array for the search.
 *@size: Size of the array.
 *@cmp: Pointer to the comparison function defining the search condition.
 *
 *Return:
 *Returns the index of the first element satisfying the search condition.
 *If the array is NULL, the size is not positive, or the comparison function
 *is NULL, returns -1 to indicate an error or that no satisfying
 *element was found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
