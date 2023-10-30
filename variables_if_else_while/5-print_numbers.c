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
	/* Loop to print the digits from 0 to 9 */
	/* Every time n is less than 10 it will continue to iterate */
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n"); /* Line break */
	return (0);
}
