#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints a string of integers ending in 98
 *
 * @n: provided integer, starting place
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
	else
	{
		printf("%d\n", n);
	}
}
