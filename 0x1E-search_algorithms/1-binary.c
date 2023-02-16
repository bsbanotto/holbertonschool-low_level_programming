#include "search_algos.h"

/**
 * binary_search - Implements binary search algorithm
 * @array: pointer to start of sorted array to be searched
 * @size: length of array to be searched
 * @value: value we're looking for in our array
 *
 * Return: Index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
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

	sleep(1);

	/* print_array(array, start, end); */

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		/*printf("Mid: %d\t", mid);*/
		print_array(array, start, end);
		if (value == array[mid])
			return (mid);

		if (value < array[mid])
		{
			/*printf("value < array[mid]\t");*/
			/*print_array(array, start, end);*/
			return (binary_search_recursive(array, start, mid - 1, value));
		}
		if (value > array[mid])
		{
			/*printf("value > array[mid]\t");*/
			/*print_array(array, start, end);*/
			return (binary_search_recursive(array, mid + 1, end, value));
		}
	}
	return (-1);
}
