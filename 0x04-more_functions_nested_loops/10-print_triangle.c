#include "main.h"

/**
 * print_triangle - Prints a triangle as large as the user wants it
 * @size: User input for triangle size
 *
 *Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i - 1; j > 0; j--)
			{
				_putchar(' ');
			}
			for (j = size - i - 1; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
