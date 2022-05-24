#include "main.h"

/**
 * _abs - Prints absolute value of provided integer
 * @x: integer input
 *
 * Return: absolute value
 */
int _abs(int x)
{
	int y;

	if (x < 0)
		y = x * -1;
	else
		y = x;
	return (y);
}
