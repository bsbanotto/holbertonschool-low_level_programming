#include "holberton.h"

/**
 * *string_toupper - Function to convert all lowercase letters to upper case
 * @s: Give string
 * Return: Uppercase string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
