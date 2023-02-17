#include "main.h"

/**
 * _isupper - Checks to see if provided character is upper case
 * @c: provided character
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
