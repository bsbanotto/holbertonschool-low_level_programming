#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Returns a pointer to the byte in s that matches any byte
 * in accept
 * @s: Source string, where we're looking
 * @accept: What we're looking for
 *
 * Return: pointer to place in s that matches any byte in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
