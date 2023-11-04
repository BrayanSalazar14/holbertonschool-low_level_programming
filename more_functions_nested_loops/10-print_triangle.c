/*
 *File: 10-print_triangle.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *print_triangle - Function that prints a triangle, followed by a new line
 *@size: Integer variable declaration
 *Return: void
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j != size && j <= size - i)
				_putchar(' ');

			else
				_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
