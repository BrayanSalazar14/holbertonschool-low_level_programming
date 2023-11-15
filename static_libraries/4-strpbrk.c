/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *_strpbrk - Function that searches a string for any of a set of bytes.
 *@s: Pointer char variable declaration
 *@accept: Pointer char variable declaration
 *Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int j = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
