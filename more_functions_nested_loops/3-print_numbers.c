/*
 *File: 3-print_numbers.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *print_numbers - Function that prints the numbers, from 0 to 9
 *
 *Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
