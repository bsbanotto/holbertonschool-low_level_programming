#include <stdio.h>

/**
 * main - prints largest prime of 612852475143
 * num: Number provided
 * i: All factors
 * j: Prime factor counter
 * primeNum: prime numbers
 * Return: 0 when successful
 */

int main(void)
{
	long num, i, j, prime;

	num = 612852475143;
	prime = 1;

	for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0) /* True when number is a factor */
		{
			/*printf("%ld\n", i);  Prints all factors */
			for (j = 2; j < i / 2; j++)
			{
				if (i % j == 0)
				{
					if (j > prime)
					{
						prime = j;
					}
					/*printf("%ld\n", prime); */
				}
			}
		}
	}
	printf("%ld\n", prime);
	return (0);
}
