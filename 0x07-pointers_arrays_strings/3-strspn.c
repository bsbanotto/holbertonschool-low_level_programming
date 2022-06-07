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
	int i, j, temp;

	i = 0;

	while (accept[i] != '\0')
	{
		temp = i;
		j = 0;
		while (s[j] != '\0')
		{
			if(s[j] == accept[i])
			{
				while (s[j] == accept[i])
				{
					count++;
					printf("%c\n", s[j]);
					j++;
				}
				continue;
			}
			j++;
		}
		i = temp + 1;
	}
	return (count);
}
