/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a specific position.
 * @n: Unsigned integer where the bit will be looked up.
 * @index: Position of the bit to be retrieved
 * 		where 0 is the least significant bit.
 *
 * Return: Value of the bit at the specified position (0 or 1),
 *         or -1 if the position is invalid.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
