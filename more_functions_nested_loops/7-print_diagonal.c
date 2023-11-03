/*
 *File: 7-print_diagonal.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *print_diagonal - Function that draws a diagonal line on the terminal
 *@n: Integer variable declaration
 *Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; n++)
		{
			j = i;
			for (; j > 0; i--)
			{
				_putchar(' ');
			}
			_putchar('97');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
