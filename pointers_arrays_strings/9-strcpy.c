/*
 *File: 9-strcpy.c
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *_strcpy - Copy src string to dest with null byte.
 *@dest: pointer type char variable
 *@src: pointer type char variable
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
