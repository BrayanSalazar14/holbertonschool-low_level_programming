/*
 *Author: Brayan Steven Salazar
 */

#include "function_pointers.h"

/**
 *array_iterator - Executes a function on each element of an array.
 *@array: Pointer to the array of integers.
 *@size: Size of the array.
 *@action: Pointer to the function to be executed on each element.
 *
 *This function applies the specified action to each element of the array.
 *
 *Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
