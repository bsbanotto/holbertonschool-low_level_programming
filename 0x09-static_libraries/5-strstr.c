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
	const char *a;
	const char *b;

	b = needle;

	if (*b == 0)
	{
		return (haystack);
	}

	for ( ; *haystack != 0; haystack++)
	{
		if (*haystack != *b)
		{
			continue;
		}
		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return (haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}
	return (NULL);
}
