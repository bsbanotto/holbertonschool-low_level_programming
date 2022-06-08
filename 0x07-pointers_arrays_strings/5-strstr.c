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
	int i, j;

	i = 0;

	while (*(haystack + i))
	{
		j = 0;
		while (*(needle + j))
		{
			if (*(needle + j) != *(haystack + i + j))
				break;
			j++;
		}
		if (*(needle + j) == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}
