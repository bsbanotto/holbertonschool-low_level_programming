#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

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

	if (pos == len - 1)
	{
		_putchar('\n');
	}
	if (pos < len - 1)
	{
		_puts_recursion(s + 1);
	}
}
