#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees 2D array of memory
 * @grid: pointer to 2D array to be freed
 * @height: number of rows to be freed
 *
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height; i++)
	{
		for (i = i; i >= 0; i--)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
