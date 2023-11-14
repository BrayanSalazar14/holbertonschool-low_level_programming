/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *_puts_recursion - Function that prints a string, followed by a new line
 *@s: Char pointer variable declaration
 *Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	putchar(*s);
	_puts_recursion(s + 1);
}
