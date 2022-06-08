#include "main.h"

/**
 * factorial - Returns the factorial value of a give integer
 * @n: supplied integer
 *
 * Return: Factorial of integer n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
