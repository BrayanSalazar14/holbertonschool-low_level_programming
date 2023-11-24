/*
 *Author: Brayan Steven Salazar
 */

#include "3-calc.h"

/**
 *get_op_func - Selects the appropriate function for a mathematical operation.
 *@s: The operator as a string.
 *
 *Description: This function takes an operator as a string and returns a
 *pointer to the corresponding function for the mathematical operation. It
 *searches through an array of structs associating operators with their
 *respective functions.
 *
 *The array must be terminated with a struct having a NULL operator and NULL
 *function to indicate the end of the list.
 *
 *If the provided operator is not valid, the function prints an error message
 *and exits with code 99.
 *
 *Return: A pointer to the function that performs the specified operation.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
