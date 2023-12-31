/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if invalid chars or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
		return (0);

	result = 0;
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			result = result * 2 + (*b - '0');
			b++;
		}

		else
			return (0);
	}
	return (result);
}
