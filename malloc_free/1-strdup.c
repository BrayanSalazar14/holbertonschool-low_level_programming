/*
 *Author: Brayan Steven Salazar
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
 *_strdup - unction that returns a pointer to a newly allocated space in memory, 
 *which contains a copy of the string given as a parameter.
 *str: String to duplicate
 *Return: Duplicate string or null if it has no reserved space in memory
 */
char *_strdup(char *str)
{
	char *strcopy;

	if (str == 0)
	{
		return (NULL);
	}
	strcopy = malloc((strlen(str) + 1) * sizeof(char));

	if (strcopy == NULL)
	{
		return (NULL);
	}

	strcpy(strcopy, str);

	return (strcopy);
}
