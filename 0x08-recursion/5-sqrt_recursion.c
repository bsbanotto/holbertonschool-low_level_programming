#include "main.h"

/**
 * _my_sqrt - Allows two int inputs for square root
 * @k: factors of integer
 * @n: provided integer from _sqrt_recursion function
 *
 * Return: Square root
 */

int _my_sqrt(long k, int n)
{
	long next_k = (k + n / k) / 2;

	if (k * k == n)
	{
		return (k);
	}
	if (k * k < n && (k + 1) * (k + 1) > n)
	{
		return (-1);
	}
	else
		return (_my_sqrt(next_k, n));
}

/**
 * _sqrt_recursion - Returns the natural square root
 * @n: provided integer
 *
 * Return: the natural square root, or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_my_sqrt(1, n));
}
