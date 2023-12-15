/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to
 *	transform one number into another.
 * @n: First unsigned long int number.
 * @m: Second unsigned long int number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int comparator;

	comparator = n ^ m;
	count = 0;
	while (comparator > 0)
	{
		count += comparator & 1;
		comparator = comparator >> 1; /* Es equal to comparator % 2 */
	}
	return (count);
}
