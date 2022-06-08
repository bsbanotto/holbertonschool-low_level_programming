#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strstr - Returns a matching substring
 * @haystack: Where we're searching
 * @needle: What we're looking for
 *
 * Return: Count of matching characters
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, needleLen, hayLen, test;

	needleLen = _strlen(needle);
	hayLen = _strlen(haystack);

	if (hayLen < needleLen)
		return (NULL);

	test = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && needle[j] == haystack[i + j]; j++)
		{
			test++;
		}
	}
	if (test == needleLen)
		return (&haystack[hayLen - needleLen]);
	else
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
