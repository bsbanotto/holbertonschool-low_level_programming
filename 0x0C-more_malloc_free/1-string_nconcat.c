#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *string_nconcat - Concats n number of characters to a string
 * @s1: First string
 * @s2: Second string
 * @n: Number of characters from s2 to add to s1
 *
 * Return: pointer to new memory space for concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ar = NULL;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2) + 1;
	}

	ar = malloc(strlen(s1) + n + 1);
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(s1); i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ar[i + j] = s2[j];
	}

	ar[i + j] = '\0';

	return (ar);
}
