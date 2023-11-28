/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *set_string - Function that sets the value of a string.
 *@s: Pointer to a pointer to char where the value will be set.
 *@to: Pointer to a constant char representing the new value.
 *
 *This function sets the value of the string pointed to by 's' to the
 *value of the string pointed to by 'to'.
 */
void set_string(char **s, char *to)
{

	if (*s == NULL)
		return;

	if (to == NULL)
	{
		*s = NULL;
		return;
	}

	*s = to;
}
