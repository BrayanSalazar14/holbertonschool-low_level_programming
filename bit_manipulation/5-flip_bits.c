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
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned int comparator;
	comparator = n ^ m;

	count = 0;
	while (comparator > 0)
	{
		count += comparator & 1;
		comparator = comparator >> 1; /* Es equal to comparator % 2 */
	}
	return (count);
}
