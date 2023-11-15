/*
 *File: 6-abs.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *_abs - Function that computes the absolute value of an integer
 *@n: Declare integer variable
 *Return: Value absolute
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
