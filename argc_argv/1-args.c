/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"
#include <stdio.h>

/**
 *main - Program that prints the number of arguments passed into it.
 *@argc: Variable that represents the number of arguments
 *@argv: Variable pointing to character string
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
