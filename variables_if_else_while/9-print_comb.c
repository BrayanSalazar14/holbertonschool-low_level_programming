/*
 *File: 9-print_comb.c
 *Author: Brayan Steven Salazar
 */

#include <stdio.h>

/**
 *main - Program that prints all possible combinations of single-digit numbers
 *
 *Return: Always 0
 */
int main(void)
{
	int n; /* Variable declaration for numbers in ASCII code */

	/* Loop to print number from 0 to 9 in ASCII code */
	for (n = 48; n < 58; n++)
	{
		putchar(n); /* Print 0123456789 */

		if (n < 57) /* Condition if 0 is less than 9 */
		{
			/* It is fulfilled, then: */
			putchar(44); /* Add , except the last one */
			putchar(32); /* Add espace except the last one */
		}
	}

	putchar('\n'); /* Line break */
	return (0);
}

