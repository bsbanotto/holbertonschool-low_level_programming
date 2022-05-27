#include "main.h"

/**
 * print_line - Prints a line as long as the user wants it
 * @n: This is how many underscores we need to print
 *
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
