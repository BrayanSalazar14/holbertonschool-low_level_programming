#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function calculates the sum of the even-valued terms in the Fibonacci
 * sequence whose values do not exceed 4,000,000. It starts with the initial
 * terms 1 and 2, and then calculates each subsequent term by adding the
 * previous two terms. It stops when the next term exceeds 4,000,000. It then
 * sums up all the even-valued terms and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int next, sum = b;

	while (1)
	{
		next = a + b;

		if (next > 4000000)
			break;

		if (next % 2 == 0)
			sum += next;
		
		a = b;
		b = next;
	}
	printf("%lu ", sum);
	printf("\n");
	return (0);
}
