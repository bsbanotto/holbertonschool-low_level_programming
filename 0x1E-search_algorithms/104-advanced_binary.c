#include "search_algos.h"

/**
 * advanced_binary - Implements binary search algorithm
 * @array: pointer to start of sorted array to be searched
 * @size: length of array to be searched
 * @value: value we're looking for in our array
 *
 * Return: Index where value is located or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	int start = 0, end = (int)size - 1;

	return (binary_search_recursive(array, start, end, value));
}


/**
 * print_array - Prints a given array the way the project wants it
 * @array: Array to be printed
 * @start: Where to start printing
 * @end: Where to end
 *
 * Return: Void
 */

void print_array(int *array, int start, int end)
{
	int i;

	/*printf("Start: %d\tEnd: %d\t", start, end);*/
	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}

/**
 * binary_search_recursive - Recursive binary search
 * @array: Sorted array to search through
 * @start: Index to start searching in array
 * @end: Index to end searching in array
 * @value: Value we're looking to find
 *
 * Return: Index where match is found, or -1 if not found
 */

int binary_search_recursive(int *array, int start, int end, int value)
{
	int mid;

	if (end >= start)
	{
		if (end == start)
			{
				return (end);
			}
		mid = start + (end - start) / 2;
		print_array(array, start, end);

		if (value <= array[mid])
		{
/*			if (end == start)
			{
				return (end);
			}*/
			return (binary_search_recursive(array, start, mid, value));
		}
		if (value > array[mid])
		{
			return (binary_search_recursive(array, mid + 1, end, value));
		}
	}
	return (-1);
}
