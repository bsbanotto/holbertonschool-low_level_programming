#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - creates an array of integers
 * @min: starting value
 * @max: ending value
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int i;
	int *ar;

	if (min > max)
		return (NULL);

	ar = malloc(((max - min) * sizeof(int)) + sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i <= (max - (min - i)); i++)
	{
		ar[i] = min;
		min++;
	}

	return (ar);
}
