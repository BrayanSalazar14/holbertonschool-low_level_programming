/*
 *File: 7-puts_half.c
 *Author: Brayan Steven Salazar Perdomo
 */

#include "main.h"

/**
 * puts_half - Function should print the second half of the string
 *@str: Declaration of variable type char
 *Return: void
 */
void puts_half(char *str)
{
	int i = 0, n;

	for (i = 0; str[i] != '\0'; i++)
		;

	n = i / 2;

	if (i % 2 == 1)
		n++;

	for (; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
