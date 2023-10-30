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
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
