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
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
