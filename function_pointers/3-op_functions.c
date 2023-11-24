/*
 *Author: Brayan Steven Perdomo
 */

#include "3-calc.h"

/**
 *op_add - Adds two integers.
 *@a: The first integer.
 *@b: The second integer.
 *
 *Return: The sum of the two integers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Subtracts two integers.
 *@a: The first integer.
 *@b: The second integer.
 *
 *Return: The result of subtracting the second integer from the first.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - Multiplies two integers.
 *@a: The first integer.
 *@b: The second integer.
 *
 *Return: The product of the two integers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - Divides two integers.
 *@a: The dividend.
 *@b: The divisor.
 *
 *Return: The result of dividing the first integer by the second.
 *
 *Note: If the divisor is zero, the function prints an error message
 *and exits with code 100.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - Computes the remainder of dividing two integers.
 *@a: The dividend.
 *@b: The divisor.
 *
 *Return: The remainder of the division of the first integer by the second.
 *
 *Note: If the divisor is zero, the function prints an error message
 *and exits with code 100.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
