/*
 *File: 100-atoi.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *_atoi - Function that convert a string to an integer.
 *@s: pointer type char variable
 *Return: integer result
 */
int _atoi(char *s)
{
	int n;
	int x = 1;
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			x = (x * -1);
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			break;
		}
	}

	for (; s[i] >= '0' && s[i] <= '9'; i++)
	{
		n = (n * 10) + (s[i] - '0');
	}

	return (n * x);
}
