#include <stdio.h>

/**
 * main - prints numners 1 thru 100
 * Prints Fizz if multiple of 3
 * Prints Buzz if multiple of 5
 * Prints FizzBuzz if multiple of both 3 and 5
 *
 * Return: 0 when successful
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
