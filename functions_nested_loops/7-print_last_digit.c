/*
 *File: 7-print_last_digit.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *print_last_digit - Function that prints the last digit of a number.
 *@n: Declare integer variable;
 *Return: Last digit
 */
int print_last_digit(int n)
{
	int lstd;

	if (n < 0)
	{
		lstd = (n % 10) * -1;
		_putchar(lstd + '0');
		return (lstd);
	}
	else
	{
		lstd = n % 10;
		_putchar(lstd + '0');
		return (lstd);
	}
	return (n);
}
