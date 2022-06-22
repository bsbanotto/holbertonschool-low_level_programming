#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_dog - Frees memory allocated for dog_t struct
 * @d: struct to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
