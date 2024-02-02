#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function generates and prints the first 100 terms of the Fibonacci
 * sequence. It starts with the initial terms 1 and 2, and then calculates
 * each subsequent term by adding the previous two terms. The sequence is
 * printed comma-separated until the 98th term, followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main()
{
	long int a = 1, b = 2, next, i;

	printf("%lu, %lu, ", a, b);

	for (i = 2; i < 98; i++)
	{
		next = a + b;
		printf("%lu", next);

		if (i < 97)
			printf(", ");

		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
