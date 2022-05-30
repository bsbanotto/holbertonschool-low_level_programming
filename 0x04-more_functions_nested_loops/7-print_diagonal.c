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

	numline = 0;
	numspace = 1;

	if (n > 0)
	{
		while (numspace <= 1)
		{
			_putchar('\\');
	}
	else
	{
		_putchar('\n');
	}
}
