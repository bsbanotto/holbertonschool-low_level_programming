#include "search_algos.h"

/**
 * linear_search - Searches for a matching value in an array of integers
 * @array: Pointer to start of array to be searched
 * @size: Number of elements in the array
 * @value: What we're looking for
 *
 * Return: Index where value is located or -1 if value not in array
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	for (i = 0; i < (int)size; i++)
	{
		if (array[i] != value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
		else if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
	}
	return (-1);
}
