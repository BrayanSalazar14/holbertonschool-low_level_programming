/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that adds positive numbers
 *@argc: Variable that represents the number of arguments
 *@argv: Variable pointing to character string
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		int j;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
