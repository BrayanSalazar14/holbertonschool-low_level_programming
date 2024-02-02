#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function calculates the sum of all the multiples of 3 or 5 below 1024.
 * It iterates through numbers from 0 to 1023 and adds those that are multiples
 * of 3 or 5 to the sum.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, suma = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			suma += i;
	}
	printf("La suma es: [%d]\n", suma);
	return (0);
}
