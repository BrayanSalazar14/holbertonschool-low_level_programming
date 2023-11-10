/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 *@s: Pointer variable declaration
 *@accept: Pointer variable declaration
 *Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int = 0;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int j = 0, coinc_char = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				coinc_char = 1;
				break;
			}
		}

		if (coinc_char == 0)
		{
			break;
		}

		length++;
	}

	return (length);
}
