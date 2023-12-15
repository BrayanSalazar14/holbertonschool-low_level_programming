/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The number to be converted and printed in binary.
 *
 * Description: Recursively converts the given unsigned long int to its
 * binary representation and prints it to the standard output.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
