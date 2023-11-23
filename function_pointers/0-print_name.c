#include "function_pointers.h"

/**
 *print_name - Prints a name using a specified function.
 *@name: Pointer to the name string.
 *@f: Pointer to the printing function.
 *
 *Calls the specified printing function with the name as an argument.
 *
 *Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
