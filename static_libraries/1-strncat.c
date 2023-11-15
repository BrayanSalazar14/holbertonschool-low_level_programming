
#include "main.h"

/**
 *_strncat - Function that concatenates two strings
 *@dest: pointer char variable declaration
 *@src: pointer char variable declaration
 *@n: Integer variable declaration
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n > j; j++, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
