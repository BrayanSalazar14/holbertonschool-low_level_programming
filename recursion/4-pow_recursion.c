/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *_pow_recursion - Function that return the value of x raised to the power of y
 *@x: Integer variable declaration
 *@y: Integer variable declaration
 *Return: Result of x exponent y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
	{
		return (1);
	}

	return (_pow_recursion(x, y - 1));
}
