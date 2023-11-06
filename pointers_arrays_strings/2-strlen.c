/*
 *File: 2-strlen.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *_strlen - Function that returns the length of a string
 *@s: char type variable
 *Return: Returns the length of a string (int)
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
