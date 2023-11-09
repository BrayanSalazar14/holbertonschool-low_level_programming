/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *string_toupper - Function that changes all lowercase x string to uppercase.
 *@phrase: Pointer char variable declaration
 *Return: result of phrase
 */
char *string_toupper(char *phrase)
{
	int i = 0;

	for (i = 0; phrase[i] != '\0'; i++)
	{
		if (phrase[i] >= 'a' && phrase[i] <= 'z')
		{
			phrase[i] = phrase[i] - 32;
		}
	}

	return (phrase);
}
