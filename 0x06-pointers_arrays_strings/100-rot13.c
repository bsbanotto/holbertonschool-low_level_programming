#include "holberton.h"

/**
 * *rot13 - Function that encodes a ROT-13 string
 * @s: provided string
 *
 * Return: string translated to ROT-13
 */

char *rot13(char *s)
{
	char *searcharray, *returnarray;
	int j, i;

	searcharray = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	returnarray = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (searcharray[i])
	{
		j = 0;
		while (s[j])
		{
			if (s[j] == searcharray[i])
			{
				s[j] = returnarray[i];
			}
			j++;
		}
		i++;
	}
	return (s);
}
