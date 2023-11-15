/*
 *File: 3-puts.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *_puts - Function that prints a string, followed by a new line
 *@str: Char type variable declaration
 *Return: void
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
