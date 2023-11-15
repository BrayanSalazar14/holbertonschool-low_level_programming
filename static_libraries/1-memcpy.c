/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 **_memcpy - Function that copies memory area.
 *@dest: pointer char variable declaration
 *@src: pointer char variable declaration
 *@n: Unsigned integer variable declaration
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
