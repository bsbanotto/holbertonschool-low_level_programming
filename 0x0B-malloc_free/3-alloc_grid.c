#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Create a 2 dimensional array of integers
 * @width: width of array (number of columns)
 * @height: height of array (number of rows)
 *
 * Return: Pointer to 2D array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
	{
		return (NULL);
		free(ar);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
	}
	if (ar == NULL)
	{
		return (NULL);
		free(ar);
	}
	return (ar);
	free(ar);
}
