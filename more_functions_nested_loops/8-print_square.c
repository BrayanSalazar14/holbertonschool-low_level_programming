/*
 *File: 8-print_square.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *print_square - Function that prints a square, followed by a new line.
 *@size: Integer variable declaration
 *Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
