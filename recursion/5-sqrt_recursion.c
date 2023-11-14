/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *square - Function that will calculate with the arguments of _sqrt_recursion
 *@x: Integer variable declaration
 *@y: Integer variable declaration
 *Return: Returns the root number
 */
int square(int x, int y)
{
	if (y * y > a)
		return (-1);

	if (y * y == a)
	{
		return (y);
	}

	return (square(x, y + 1));
}

/**
 *_sqrt_recursion - function that returns the natural square root of a number.
 *@n: Integer variable declaration
 *Return: Call the square function and pass the parameters and return the resul
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
