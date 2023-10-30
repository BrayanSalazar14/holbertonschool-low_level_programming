/*
 *File: 0-positive_or_negative.c
 *Author: Brayan Steven Salazar
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Assign a random number and print if it is positive or negative
  *
  * Return: Always 0.
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
