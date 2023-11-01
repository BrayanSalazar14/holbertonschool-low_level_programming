/*
 *File: 7-print_last_digit.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"
/**
 *print_last_digit - Function that prints the last digit of a number
 *@n: Declare integer variable
 *Return: n Always
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n * -1) % 10;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
}
