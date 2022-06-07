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

	for(i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				count++;
			}
			j++;
		}
	}
	return (count);
}
