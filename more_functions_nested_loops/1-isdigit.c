/*
 *File: 1-isdigit.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *_isdigit - Function that checks for a digit (0 through 9)
 *@c: Integer variable declaration;
 *Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
