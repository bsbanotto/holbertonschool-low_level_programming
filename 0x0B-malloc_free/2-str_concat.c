#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Concatenates 2 strings
 * @s1: first given string
 * @s2: Second given string
 *
 * Return: Null if error, or pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i, j;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");

	ar = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; j <= _strlen(s2); j++)
	{
		ar[i + j] = s2[j];
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
