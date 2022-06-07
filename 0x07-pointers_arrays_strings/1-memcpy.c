#include "main.h"

/**
 * *_memcpy - Copies a memory area
 *
 * @dest: Pointer to destination memory area
 * @src: Pointer to source memore area
 * @n: number of bytes to copy
 *
 * Return: Pointer to memory area (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
