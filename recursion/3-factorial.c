/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *factorial - Function that returns the factorial of a given number.
 *@n: Integer variable declaration
 *Return: Result of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
