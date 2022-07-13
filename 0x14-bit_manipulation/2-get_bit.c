#include "main.h"

/**
 * get_bit - Gets whether a 1 or 0 is at given index
 * @n: provided integer
 * @index: where to look
 *
 * Return: value at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;
	unsigned int maxCheck;

	maxCheck = (sizeof(unsigned long int) * 8);
	if (index > maxCheck)
		return (-1);

	return (bitValue = (n >> index) & 1);
}
