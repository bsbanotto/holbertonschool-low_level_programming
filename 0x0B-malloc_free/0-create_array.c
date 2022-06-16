#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array and initializes with specific char
 * @size: size of array to create
 * @c: Character to initialize
 *
 * Return: Null if size = 0, pointer to array when successful
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ar = malloc(size * 1);
		if (ar == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
	}
	return (ar);
}
