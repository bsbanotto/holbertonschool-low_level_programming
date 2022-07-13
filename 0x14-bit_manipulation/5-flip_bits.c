#include "main.h"

/**
 * bits_in_ulint - Counts bits in provided unsigned long ints
 * @ulint: provided unsigned long int
 *
 * Return: Count of bits in provided unsigned long int
 */

int bits_in_ulint(unsigned long int n)
{
	int count = 0;
	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

/**
 * flip_bits - Counts number of bits that need flipped to change numbers
 * @n: number to change from
 * @m: number to change to
 *
 * Return: Number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (bits_in_ulint(n ^ m));
}
