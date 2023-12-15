/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 * clear_bit - Clears the value of a bit to 0 at a given index.
 * @n: Pointer to the unsigned long int where the bit will be cleared.
 * @index: Index of the bit to be cleared, starting from 0.
 *
 * This function clears the bit at the specified index in the
 * unsigned long int pointed to by n.
 *
 * Return: 1 if it worked, or -1 if an error occurred (index out of range).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
