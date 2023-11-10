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
			break;
		}
	}

	if (s[i] == c || s[i] == '\0')
		/* Verifica si el caracter en la posición actual es igual a C */
		/* O si el caracter en posición actual es el cartacter nulo */
	{
		/* Devuelve un puntero a la posición actual en la cadena s */
		/* Devuelve un puntero a la posición donde se encontró el caracter */
		return (&s[i]);
	}
	return (NULL);
}
