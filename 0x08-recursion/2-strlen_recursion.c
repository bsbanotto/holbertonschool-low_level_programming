#include "main.h"

/**
 * _strlen_recursion - Function to return the length of a string
 * @s: Provided string
 *
 * Return: integer length of the string
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s != '\0')
	{
		n = 1 + _strlen_recursion(s + 1);
	}
	else
		n = 0;
	return (n);
}
