/*
 *Author: Brayan Steven Salazar
 */
#include "main.h"

/**
 *_strcmp - Function that compares two strings.
 *@s1: Char variable declaration
 *@s2: Char variable declaration
 *Return: op or s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		int com = s1[i] - s2[i];

		if (com != 0)
		{
			return (com);
		}
	}

	return (s1[i] - s2[i]);
}
