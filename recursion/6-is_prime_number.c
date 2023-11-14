/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *check - Function that checks if a number is even or not
 *@x: Integer to be checked
 *@y: Divisor to check if x is divisible
 *Return: 1 if it is prime and 0 if it is not
 */
int check(int x, int y)
{
	if (y == x)
		return (1);

	if (x % y == 0)
		return (0);

	return (check(x, y + 1));
}


/**
 *is_prime_number - Function that returns 1 if the input integer is a prime
 *number, otherwise return 0
 *@n: Integer to be checked
 *Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (check(n, 2));
}
