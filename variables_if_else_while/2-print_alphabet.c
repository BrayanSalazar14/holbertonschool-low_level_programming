/*
 *File: 2-print_alphabet.c
 *Author: Brayan Steven Salazar
 */

#include<stdio.h>

/**
 * main - Program that prints the alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char letters; /* Se declara variable para representar una letra */

	/*Imprime letras minúsculas de 'a' a 'z'*/
	for (letters = 'a'; letters <= 'z' ; letters++)
	{
		putchar(letters);
	}

	putchar('\n'); /* Salto de linea */
	return (0);
}
