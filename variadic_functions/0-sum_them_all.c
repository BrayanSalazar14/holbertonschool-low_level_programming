#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;

	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, n);

	va_end(ptr);

	return (sum);
}
