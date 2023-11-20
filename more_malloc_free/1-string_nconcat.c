/*
 *Author: Brayan Steven Salazar
 */
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - Concatenates two strings.
 *@s1: Pointer to the first string. If NULL, treated as an empty string.
 *@s2: Pointer to the second string. If NULL, treated as an empty string.
 *@n: Number of characters from s2 to concatenate
 *
 *Return: A pointer to a newly allocated string that contains the concatenation
 *of s1 and the first n characters of s2, followed by a null-terminating
 *character. If there is a memory allocation failure, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatString;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size_t s1_length = strlen(s1);
	size_t   s2_length = strlen(s2);

	if (n >= s2_length)
		n = s2_length;

	concatString = (char *) malloc(s1_length + n + 1);

	if (concatString == NULL)
		return (NULL);

	strcpy(concatString, s1);

	strncat(concatString, s2, n);

	return (concatString);
}
