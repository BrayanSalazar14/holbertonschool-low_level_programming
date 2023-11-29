/*
 *Author: Brayan Steven Salazar
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of two digits
 *
 * Description: This program generates and prints all possible
 * combinations of two digits. The digits must be different, and
 * combinations like 01 and 10 are considered the same. The
 * combinations are printed in ascending order, separated by a comma
 * and space. The putchar function is used for output, and the program
 * adheres to specific constraints on its usage.
 *
 * Return: Always 0.
 */
int main (void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
