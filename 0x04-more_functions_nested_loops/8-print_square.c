#include "main.h"

/**
 * print_square - Prints a square made of # to perscribes size
 * @size: This is how big of a diagonal we need to print
 *
 * Return: void
 */

void print_square(int size)
{
	int length, height;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (height = 0; height < size; height++)
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
