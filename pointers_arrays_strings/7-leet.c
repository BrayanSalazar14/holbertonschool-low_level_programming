/*
 *Author: Brayan Steven Salazar
 */

#include "main.h"

/**
 *leet - Function that encodes a string into 1337.
 *@phrase: Pointer char variable declaration
 *Return: result of phrase
 */
char *leet(char *phrase)
{
	int i = 0;

	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; phrase[i] != '\0'; i++)
	{
		int j = 0;

		for (; j < 11; j++)
		{
			if (letters[j] == phrase[i])
			{
				phrase[i] = numbers[j];
			}
		}
	}
	return (phrase);
}
