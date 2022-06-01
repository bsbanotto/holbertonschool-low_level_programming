#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an array of numbers
 * @a: given array
 * @n: number of elements to print
 *
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i, len;

	len = 0;

	while (a[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	for (i = n - 1; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
}
