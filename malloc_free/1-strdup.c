#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char *_strdup(char *str)
{
	char *strcopy;

	if (str == 0)
	{
		return (NULL);
	}
	strcopy = malloc((strlen(str) + 1) * sizeof(char));

	if (strcopy == NULL)
	{
		return NULL;
	}

	strcpy(strcopy, str);

	return strcopy;
}
