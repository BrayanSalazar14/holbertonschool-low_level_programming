/*
 *File: 9-fizz_buzz.c
 *Author: Brayan Steven Salazar
 */

#include <stdio.h>

/**
 *main - Print numbers 1-100, Fizz for 3, Buzz for 5, FizzBuzz for both.
 *
 *Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("Fizz Buzz ");

		else if (i % 3 == 0)
			printf("Fizz ");

		else if (i % 5 == 0)
			printf("Buzz ");

		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
