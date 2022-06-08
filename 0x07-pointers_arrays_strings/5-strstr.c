#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strstr - Locates a matching substring within a string
 *
 * @haystack: Where we're searching
 * @needle: What we're looking for
 *
 * Return: Entire string starting where substring matched
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, needleLen, hayLen, placeInHaystack;

	needleLen = _strlen(needle);
	hayLen = _strlen(haystack);

	if (hayLen < needleLen)
		return (NULL);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		placeInHaystack = i;
		for (j = 0; needle[j] != '\0' && needle[j] == haystack[i]; j++)
		{
			if (j == needleLen - 1)
				return (haystack + placeInHaystack);
			i++;
		}
	}
	return (NULL);
}

/**
 * _strlen - Returns the integer length of a string
 * @s: Supplied string
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
