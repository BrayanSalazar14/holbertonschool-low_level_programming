/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *reverse_array - Function that reverses the content of an array of integers.
 *@a: Pointer int variable declaration
 *@n: int variable declaration
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int rev;

	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[i - 1 - n];
		a[i - 1 - n] = rev;
	}
}
