#include "main.h"

/**
 * set_bit - Sets the value of a defined bit to 1
 * @n: provided integer
 * @index: index of bit to set to 1
 *
 * Return: 1 on success, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int maxCheck;
	unsigned long int clearBit = ~(1 << index);
	unsigned long int mask = *n & clearBit;

	maxCheck = (sizeof(unsigned long int) * 8);
	if (index > maxCheck)
		return (-1);

	*n = mask | (1 << index);

	return (1);
}
