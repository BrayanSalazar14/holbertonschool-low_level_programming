/*
 *Author: Brayan Steven Salazar
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *alloc_grid - Function that returns a pointer to a 2 dimensional
 *array of integers.
 *@width: variable for the width of my array
 *@height: variable for the height of my matrix
 *Return: Two-dimensional array assigned and initialized to 0
 */
int **alloc_grid(int width, int height)
{
	int **matriz;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	matriz = malloc(sizeof(int *) * height);

	if (matriz == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matriz[i]  = malloc(sizeof(int) * width);

		if (matriz[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(matriz[j]);
			}

			free(matriz);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			matriz[i][j] = 0;
		}
	}
	return (matriz);
}
