#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints the given string followed by new line
 * @s: Provided string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int len = _strlen(s);
	int pos = 0;

	_putchar(s[pos]);
	pos++;

	if (pos < len)
	{
		_puts_recursion(s + 1);
	}
	if (pos == len)
	{
		_putchar('\n');
	}
}



/**
 * _strlen - Returns the length of a string
 * @s: Provided string
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{};
	return (i);
}
