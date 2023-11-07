/*
 *File: 8-print_array.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *print_array - Function that prints n elements of an array of integers
 *@a: variable integer pointer array
 *@n: Integer quantity variable
 *Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
