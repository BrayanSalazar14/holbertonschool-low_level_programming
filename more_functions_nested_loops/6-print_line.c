/*
 *File: 6-print_line.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *print_line - Function that draws a straight line in the terminal
 *@n: Integer variable declaration
 *Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n')
	}
	else
	{
		_putchar('\n');
	}
}
