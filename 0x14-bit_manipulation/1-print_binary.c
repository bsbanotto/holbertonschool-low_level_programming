#include "main.h"

/**
 * print_binary - Prints binary representation of number
 * @n: privided integer
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	unsigned long int copy = n, place_holder = 1;
	int len = -1;

	while (copy > 0)
	{
		len ++;
		copy >>= 1;
	}
	
	if (len > 0)
		place_holder = place_holder << len;

	while (place_holder > 0)
	{
		if (n & place_holder)
			_putchar('1');
		else
			_putchar('0');
		
		place_holder >>= 1;
	}
}
