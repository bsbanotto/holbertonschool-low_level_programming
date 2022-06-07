#include "main.h"

/**
 * *_memset - Function that fills memory with a constant byte
 *
 * @s: Pointer to memory area
 * @b: constant byte to write
 * @n: number of bytes to fill
 *
 * Return: Pointer to memory area (s)
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
