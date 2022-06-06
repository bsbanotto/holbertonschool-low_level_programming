#include "holberton.h"

/**
 * *rot13 - Function that encodes a ROT-13 string
 * @s: provided string
 *
 * Return: string translated to ROT-13
 */

char *rot13(char *s)
{
	int j, i;

	char c1[] = {'a', 'b', 'c', 'A', 'B', 'C'};
	char c2[] = {'n', 'o', 'p', 'N', 'O', 'P'};
	
	i = 0;
	while (s[i])
	{
		j = 0;
		while (c1[j])
		{
			if (s[i] == c1[j])
			{
				s[i] = c2[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
