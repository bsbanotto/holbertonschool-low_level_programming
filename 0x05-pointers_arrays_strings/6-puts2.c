#include "main.h"

/**
 * puts2 - Prints every other character of a provided string
 * @str: provided string
 *
 * Return: Void
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
