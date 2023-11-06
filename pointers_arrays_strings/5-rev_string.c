/*
 *File: 5-rev_string.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *rev_string - Function that reverses a string.
 *@s: Declaration of variable type char
 *Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j, revS;

	for (int i = 0; s[i] != '\0'; i++)
		;

	for (j = 0; j < i / 2; j++)
	{
		revS = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = revS;
	}
}
