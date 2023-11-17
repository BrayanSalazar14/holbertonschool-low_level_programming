/*
 *Author: Brayan Steven Salazar
 */

#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - function that frees a 2 dimensional grid previously
 *created by your alloc_grid function.
 *@grid: The two-dimensional grid to be freed.
 *height: The height of the grid (number of rows).
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
