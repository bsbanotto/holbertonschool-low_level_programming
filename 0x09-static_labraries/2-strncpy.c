#include "main.h"

/**
 * *_strncpy - Copies 'n' characters of a string to dest
 * @dest: Destination string
 * @src: Source string
 * @n: number of characters to copy
 *
 *Return: Char, pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i])
			dest[i] = src[i];
		else
			break;
	}

	for ( ; i < n; i++)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}

	return (dest);
}
