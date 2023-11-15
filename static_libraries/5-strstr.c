/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *_strstr - Function that locates a substring.
 *@haystack: Pointer char variable declaration
 *@needle: Pointer char variable declaration
 *Return: Null
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int j = 0;

		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
			;

		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
