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
	int n = 48; /* It is declared with the value 48 of the ASCII code */
		      /* which is equivalent to 0 */


	/* Loop to print the numbers from 0 to 9 */
	/* n = 48 ASCII code and 9 = 57 ASCII code */
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n'); /* Line break */
	return (0);
}
