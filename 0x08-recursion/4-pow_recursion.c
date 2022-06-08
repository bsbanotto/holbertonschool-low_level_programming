#include "main.h"

/**
 * _pow_recursion - Function to do exponential math
 * @x: base integer
 * @y: exponent integer
 *
 * Return: value of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
