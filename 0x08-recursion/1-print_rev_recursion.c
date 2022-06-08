#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * _print_rev_recursion - Prints the given string followed by new line
 * @s: Provided string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int len = _strlen(s);
	int pos = len;

	_putchar(s[pos]);

	if (pos == len - 1)
	{
		_putchar('\n');
	}
	if (pos < len - 1)
	{
		_print_rev_recursion(s - len);
	}
}
