#include "holberton.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: given array
 * @n: number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}
