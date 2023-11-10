/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *_strchr - Function that locates a character in a string.
 *@s: Pointer char variable declaration
 *@c: char variable declaration
 *Return: Null o s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

		else
		{
			return (NULL);
		}
	}

	return(s);
}
