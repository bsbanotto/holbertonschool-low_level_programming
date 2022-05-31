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
	long num, factor, primeFactor, primeReturn;

	num = 612852475143;
	primeReturn = 1;

	for (factor = 2; factor <= num / 2; factor++)
	{
		if (num % factor == 0)
		{
			for (primeFactor = 2; primeFactor < factor / 2; primeFactor++)
			{
				if (factor % primeFactor == 0)
				{
					if (primeFactor > primeReturn)
					{
						primeReturn = primeFactor;
					}
				}
			}
		}
	}
	printf("%ld\n", primeReturn);
	return (0);
}
