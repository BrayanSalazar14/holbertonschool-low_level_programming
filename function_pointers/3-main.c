/*
 *Author: Brayan Steven Salazar
 */

#include "3-calc.h"

/**
 *main - Entry point of the program.
 *@argc: Number of command-line arguments.
 *@argv: Array containing command-line arguments.
 *
 *Description: This program performs mathematical operations based on
 *the command-line arguments. It expects three arguments: an integer,
 *an operator, and another integer. It then performs the specified
 *operation and prints the result.
 *
 *Return: 0 on success, other values on failure.
 */
int main(int argc, char *argv[])
{
	char *op;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = argv[2];

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
