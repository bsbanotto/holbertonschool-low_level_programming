#include "main.h"
#include <stdio.h>

/**
 * _strspn - Returns the number of bytes that match given string
 * @s: Source string, where we're looking
 * @accept: What we're looking for
 *
 * Return: Count of matching characters
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	i = 0;

	for(j = 0; s[j] != '\0' && s[j + 1] != s[j]; j++)
	{
		if (s[j] == accept[i])
		{
			count++;
		}
		i++;
	}
	return (count);
}
