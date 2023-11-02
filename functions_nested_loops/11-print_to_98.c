/*
 *File: 11-print_to_98.c
 *Author: Brayan Steven Salazar
 */

#include <stdio.h>
#include "main.h"


/**
 *print_to_98 - Function that prints all natural numbers from n to 98
 *followed by a new line
 *@n: Declaration of the integer variable
 *Return: void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", n);
	}

	else
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", n);
	}
}
