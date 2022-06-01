#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: provided string
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int i, len, tempStr;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		tempStr = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tempStr;
	}
}
