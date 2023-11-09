/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 **cap_string - Function that capitalizes all words of a string.
 *@phrase: Pointer char variable declaration
 *Return: result of phrase
 */
char *cap_string(char *phrase)
{
	int i = 0;

	for (i = 0; phrase[i] != '\0'; i++)

	{
		if (phrase[0] >= 'a' && phrase[0] <= 'z')
		{
			phrase[0] = phrase[0] - 32;
		}

		if (phrase[i] == ' ' || phrase[i] == '\t' || phrase[i] == '\n'
				|| phrase[i] == ',' || phrase[i] == ';' || phrase[i] == '.'
				|| phrase[i] == '.' || phrase[i] == '!' || phrase[i] == '?'
				|| phrase[i] == '"' || phrase[i] == '(' || phrase[i] == ')'
				|| phrase[i] == '{' || phrase[i] == '}')
		{
			if (phrase[i + 1] >= 'a' && phrase[i + 1] <= 'z')
			{
				phrase[i + 1] = phrase[i + 1] - 32;
			}
		}
	}
	return (phrase);
}
