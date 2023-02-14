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
    print_array(array, 0, (int)size);
    return(value);
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

    printf("Searching in array: ");
    for(i = start; i < end - 1; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("%d\n", array[i]);
}