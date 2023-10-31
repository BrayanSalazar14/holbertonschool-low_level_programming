/*
 *File: 8-print_base16.c
 *Author: Brayan Steven Salazar
 */

#include<stdio.h>

/**
 *main - Program that prints all the numbers of base 16 in lowercase
 *
 *Return: Always 0
 */
int main(void)
{
	int n; /* Variable declaration for base 16 numbers */
	char letters; /* Variable declaration for base 16 letters */

	/* Loop to print base 16 numbers */
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	/* Loop to print base 16 letters */
	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}

	putchar('\n'); /* Line break */
	return (0);
}
