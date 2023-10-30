/*
 *File: 5-print_numbers.c
 *Author: Brayan Steven Salazar
 */

#include <stdio.h>

/**
 * main - prints a string with single digit numbers
 *
 *Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
