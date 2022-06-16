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
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (i = i; i >= 0; i--)
			{
				free(ar[i]);
			}
			free(ar);
			return (NULL);
		}
	}
	return (ar);
}
