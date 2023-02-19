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

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (count);
}
