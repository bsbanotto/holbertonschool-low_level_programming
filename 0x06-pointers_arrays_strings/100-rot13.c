#include "holberton.h"

/**
 * *rot13 - Function that encodes a ROT-13 string
 * @s: provided string
 *
 * Return: string translated to ROT-13
 */

char *rot13(char *s)
{
	char *c1, *c2;
	int j, i;

	c1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ(\")- ";
	c2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM(\")- ";

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