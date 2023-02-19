#include "main.h"

/**
 * _puts - Prints a string followed by new line
 * @str: provided string
 *
 * Return: Void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
