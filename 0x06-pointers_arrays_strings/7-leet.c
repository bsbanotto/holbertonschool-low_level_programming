#include "holberton.h"

/**
 * *leet - Function that encodes a leet string
 * @s: provided string
 *
 * Return: string translated to leet
 */

char *leet(char *s)
{
	char *c1, *c2;
	int j, i;

	c1 = "aAeEoOtTlL";
	c2 = "4433007711";

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
