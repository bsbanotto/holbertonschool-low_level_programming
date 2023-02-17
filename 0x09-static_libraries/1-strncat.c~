#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - Function to concatenate two strings
 * It will use at most n bytes from src
 * src does not need to be null terminated if it contains n or mor bytes
 * @dest: second string
 * @src: first string. This gets put in front of dest
 * @n: number of bytes to terminate src
 *
 * Return: Char, pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i])
		i++;

	for (j = 0; j < n; j++)
	{
		if (src[j])
		{
			dest[i + j] = src[j];
		}
		else
			break;
	}

	return (dest);
}
