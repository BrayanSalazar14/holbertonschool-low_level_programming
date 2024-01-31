#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 *
 * This function searches for a given value in a sorted array using binary
 * search. It divides the array in half repeatedly until the target value is
 * found or the search space is exhausted.
 *
 * @array: Pointer to the first element of the sorted array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: Index of the target value if found, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int i, ini = 0, fin = size - 1, med = fin / 2;

	if (!array)
		return (-1);

	while (ini <= fin)
	{
		printf("Searching in array:");
		for (i = ini; i < fin; i++)
			printf(" %d,", array[i]);

		printf(" %d", array[fin]);
		printf("\n");

		if (value == array[med])
			return (med);

		if (value < array[med])
			fin = med - 1;
		else
			ini = med + 1;

		med = (ini + fin) / 2;
	}
	return (-1);
}
