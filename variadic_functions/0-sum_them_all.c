/*
 *Author: Brayan Steven Salazar
 */

#include "variadic_functions.h"

/**
 *sum_them_all - Sums a variable number of integers.
 *@n: Number of integers to sum.
 *@...: Integers to sum (variable arguments).
 *
 *Description: Takes an integer `n` followed by variables, returns their sum.
 *Uses stdarg.h for handling variable arguments.
 *
 *Return: Sum of provided integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
