#include <stdio.h>

/**
 * main - prints largest prime of 612852475143
 *
 * Return: 0 when successful
 */

int main(void)
{
	long num, i;

	num = 6000;

	for (i = 2; i < num / 2; i++)
	{
		if (num % i == 0) /* True when number is a factor */
		{
			printf("%ld, ", i);
		}
	}
	return (0);
}
