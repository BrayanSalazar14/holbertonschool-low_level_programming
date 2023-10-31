/*
 *File: 1-alphabet.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *print_alphabet - Function that prints the alphabet, in lowercase
 *
 *Return: Always void
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
