/*
 *File: 4-isalpha.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *_isalpha - Function that checks for alphabetic character.
 *@c: Declare integer variable
 *Return: 1 if c is lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
