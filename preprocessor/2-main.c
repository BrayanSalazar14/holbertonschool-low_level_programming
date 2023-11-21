/*
 *Author: Brayan Steven Salazar
 */

#include <stdio.h>

/**
 *main - Program that prints the name of the file it was compiled from
 *followed by a new line
 *Return: 0 if correct
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
