/*
 *File: 0-isupper.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *_isupper - Function that checks for uppercase character
 *@c: Integer variable declaration
 *Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
