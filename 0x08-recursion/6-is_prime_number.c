#include "main.h"

/**
 * my_prime_number - Helper, Returns 1 if prime, 0 otherwise.
 * @i: counter
 * @n: provided integer
 *
 * Return: 1 if prime, 0 otherwise
 */

int my_prime_number(int i, int n)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (my_prime_number(i - 1, n));
}



/**
 * is_prime_number - Returns 1 if prime, 0 otherwise
 * @n: passed in integer
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (my_prime_number(n / 2, n));
}
