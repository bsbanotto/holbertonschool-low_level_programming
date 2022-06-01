#include <stdio.h>

/**
 * main - prints largest prime of 612852475143
 * num: Number provided
 * i: counter for all factors
 * j: counter for prime factors
 * number: provided number
 * isPrime: 1 if prime, 0 if not prime
 * primeReturn: Largest prime
 * Return: 0 when successful
 */

int main(void)
{
	long i, j, number, isPrime, primeReturn;

	number = 61285247514;
	primeReturn = 1;

	for (i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
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
