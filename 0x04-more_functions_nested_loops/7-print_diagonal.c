#include "main.h"

/**
 * print_diagonal - Prints a diagonal line as long as the user wants it
 * @n: This is how big of a diagonal we need to print
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int numspace;
	int numline;

	if (n > 0)
	{
		for (numline = 0; numline < n; numline++)
		{
			numspace = n - numline;
			while (numspace < n)
			{
				_putchar(' ');
				numspace++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
