#include "main.h"

/**
 * _isdigit - Checks to see if provided character is upper case
 * @c: provided character
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
