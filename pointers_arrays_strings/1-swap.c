/*
 *File: 1-swap.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *swap_int - Function that swaps the values of two integers
 *@a: Pointer type variable
 *@b: Pointer type variable
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
