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
	for (n = n; n != 0; n--)
	{
		*dest++ = *src;
		src++;
	}
	return (dest);
}
