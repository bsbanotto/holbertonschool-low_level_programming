#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function given as a parameter on each element
 * in a given array
 *
 * @array: Given array
 * @size: Size of given array
 * @action: Pointer to function to be used
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for(i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
