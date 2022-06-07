#include "main.h"

/**
 * *_strchr - Locates a character in a string
 * @s: Source string, where we look
 * @c: Character we are looking for
 *
 * Return: pointer to first occurrance, or NULL if not in string
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
