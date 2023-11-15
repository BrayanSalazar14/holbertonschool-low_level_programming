/*
 *File: 0 - Pointers
 *Author: Brayan Steven Salazar
 */
#include "main.h"

/**
 *_strcat - Function that concatenates two strings
 *@dest:pointer char variable declaration
 *@src: pointer char variable declaration
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* Ubicarnos en la ultima posición de mi destino (dest) */


	while (dest[i] != '\0')
	{
		i++;
	}

	/* Igualar el valor a partir de la posición nula de dest */
	 /*  e ir moviendonos en ambas direcciones */

	for (; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
