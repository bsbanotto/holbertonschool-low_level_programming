#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Duplicates a given string
 * @str: - given string
 *
 * Return: Null if error, or pointer to duplicate string
 */

char *_strdup(char *str)
{
	char *ar;
	int i;

	if (str == NULL)
		return (NULL);

	ar = malloc(_strlen(str) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < _strlen(str); i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}

/**
 * _strlen - Returns length of given string
 * @s: given string
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}

	return (len);
}
