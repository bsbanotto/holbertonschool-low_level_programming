#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Allocates memory
 * @b: size to allocate
 *
 * Return: Pointer when successful, exit status 98 on fail
 */

void *malloc_checked(unsigned int b)
{
	char *ar;

	ar = malloc(b);
	if (ar == NULL)
	{
		exit(98);
	}
	return (ar);
}
