/*
 *Author: Brayan Steven Salazar
 */

#include "variadic_functions.h"

/**
 *print_numbers - Prints integers, separated by a string.
 *@separator: The string to be printed between numbers.
 *@n: Number of integers to print.
 *@...: Integers to print (variable arguments).
 *
 *Description: Takes an integer `n` followed by variables and prints them.
 *             If a separator string is provided,
 *             it is printed between the numbers.
 *             Uses stdarg.h for handling variable arguments.
 *
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arguments, int));

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(arguments);
	printf("\n");
}
