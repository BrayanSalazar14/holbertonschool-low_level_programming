#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function generates and prints the first 50 terms of the Fibonacci sequence.
 * It starts with the initial terms 1 and 2, and then calculates each subsequent term
 * by adding the previous two terms. The sequence is printed comma-separated until
 * the 50th term, followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a = 1; 
	long b = 2; 
	long next;  
	long i;

	printf("%lu, %lu, ", a, b);

	for (i = 3; i <= 50; i++)
	{
		next = a + b;
		printf("%lu", next);
		if (i < 50)
			printf(", ");
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
