/*
 *File: 2-print_alphabet_x10.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *print_alphabet_x10 - Function that prints 10 times the alphabet
 *in lowercase, followed by a new line.
 *
 *Return: Always void.
 */
void print_alphabet_x10(void)
{
	int letters;
	int cant;

	for (cant = 0; cant < 10; cant++)
	{
		for (letters = 'a'; letters < 'z'; letters++)
		{
			_putchar(letters);
		}
	_putchar('\n');
	}
}
