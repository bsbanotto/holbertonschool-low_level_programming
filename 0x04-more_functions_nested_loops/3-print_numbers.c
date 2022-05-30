#include "main.h"

/**
 * print_numbers - Prints numbers 0 - 9 and new line
 *
 * Return: void
 */

void print_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
