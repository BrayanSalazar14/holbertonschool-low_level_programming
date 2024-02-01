#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - Prints a number to stdout
 *
 * This function prints a number to stdout. If the number is a single digit,
 * it prints the digit. If the number is two digits, it prints both digits.
 *
 * @num: The number to print
 */
void print_number(int num)
{
	if (num < 10)
		_putchar(num + '0');
	else
	{
		_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
	}
}

/**
 * print_times_table - Prints the multiplication table for a given number
 *
 * This function prints the multiplication table for a given number 'n' up to
 * 'n' times 'n'.
 *
 * @n: The number for which to print the multiplication table
 */
void print_times_table(int n)
{
	int i, j, mul;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mul = i * j;
			if (mul > 99)
			{
				print_number(mul / 10);
				print_number(mul % 10);
			}
			else if (mul > 9)
			{
				_putchar(' ');
				print_number(mul);
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else
				_putchar(j + '0');

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
