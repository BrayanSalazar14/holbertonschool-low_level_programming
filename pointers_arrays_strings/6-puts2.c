/*
 *File: 6-puts2.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *puts2 - Function that prints every other character of a string
 *starting with the first character
 *@str: Declaration of variable type char
 *Return: void
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i += 2)

	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
