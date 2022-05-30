#include "main.h"

/**
 * print_diagonal - Prints a diagonal line as long as the user wants it
 * @n: This is how big of a diagonal we need to print
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int numspace, numline;

	if (n > 0)
	{
		if (n == 1)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			for (numspace = 1; numspace <= n; numspace++)
			{
				for (numline = 1; numline <= n; numline++)
				{
					_putchar('\\');
					_putchar('\n');
				}
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
