#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for first occurrance of a specified int
 * @size: Number of elements in the array
 * @cmp: Pointer to function to compare values
 * @array: Array to search in
 *
 * Return: index of first matching element or -1 on failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
