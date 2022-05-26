#include "stdio.h"
/**
 * main - Returns the first 50 fibonacci numbers
 *
 * Return: 0 when successful
 */

int main(void)
{
	long i, num1, num2, fib;

	num1 = 1;
	num2 = 2;

	printf("1, 2, ");
	for (i =0; i < 47; i++)
	{
		fib = num1 + num2;
		printf("%ld, ", fib);
		num1 = num2;
		num2 = fib;
	}
	fib = num1 + num2;
	printf("%ld\n", fib);

	return (0);
}
