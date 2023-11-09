/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *_strncpy - Function that copies a string.
 *@dest: pointer char variable declaration
 *@src: pointer char variable declaration
 *@n: Integer variable declaration
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
