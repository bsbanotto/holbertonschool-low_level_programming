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
	long i, j, num, isPrime, primeReturn;

	num = 612852475143;
	primeReturn = 1;

	for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			isPrime = 1;
			for (j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					isPrime = 0;
					break;
				}
			}
			if (isPrime == 1)
			{
				if (i > primeReturn)
				{
					primeReturn = i;
				}
			}
		}
	}
	printf("%ld\n", primeReturn);
	return (0);
}
