/*
 * File: 101-quote.c
 * Author: Brayan Steven Salazar
 */

#include<stdio.h>
#include<unistd.h>
/**
 * main - C program that prints already stored text
 *
 * Return: 1.
 */
int main(void)
{
	write(stderr, "and that piece of art is useful\"
		- Dora Korpar, 2015-10-19\n", 57);
	return (1);

}
