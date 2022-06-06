#include "holberton.h"

/**
 * print_number - Prints the number that is given
 * @n: Provided integer
 *
 * Return: Void
 */

void print_number(int n)
{
	if (n == 0)
		_putchar(n + '0');
	else if (n > 0 && n < 10)
		_putchar(n + '0');
	else if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 100) + '0');
	}
	else if (n >= 1000 && n < 10000)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n / 100) % 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 1000) + '0');
	}
}
