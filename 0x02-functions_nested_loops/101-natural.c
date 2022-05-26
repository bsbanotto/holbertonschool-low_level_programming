#include "stdio.h"
/**
 * main - Returns sum of all natural numbers that are a multiple of 3 or 5
 * below 1024 (excluded)
 * @i: is the counter
 *
 * Return: 0 when successful
 */

int main(void)
{
	int sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			sum = sum + i;
	}
	printf("%d\n", sum);

	return (0);
}
