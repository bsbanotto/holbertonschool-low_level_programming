#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *_calloc - Allocates memory for an array
 * @nmemb: number of member elements
 * @size: size of each member element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ar = malloc(nmemb * size);

	for (i = 0; i < nmemb * size; i++)
	{
		ar[i] = 0;
	}
	return (ar);
}
