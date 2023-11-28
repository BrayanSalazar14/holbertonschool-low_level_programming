/*
 *Author: Brayan Steven Salazar
 */
#include "variadic_functions.h"

/**
 *print_strings - Prints strings followed by a separator.
 *@separator: The string to be printed between strings.
 *@n: The number of strings to be printed.
 *@...: The strings to be printed (variable arguments).
 *
 *Description:
 *   This function takes a separator string and a variable number of strings
 *   to print. If a string is NULL, it prints "(nil)" instead. The strings are
 *   separated by the specified separator.
 *
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *string = va_arg(args, char *);

		if (string != NULL)
			printf("%s", string);

		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
