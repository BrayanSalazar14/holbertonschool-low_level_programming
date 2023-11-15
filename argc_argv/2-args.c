/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"
#include <stdio.h>

/**
 *main - Program that prints all arguments it receives.
 *@argc: Variable that represents the number of arguments
 *@argv: Variable pointing to character string
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
