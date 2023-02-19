#include "main.h"

/**
 * _islower - returns 1 if lowercase, 0 otherwise
 * @c: privided integer
 *
 * Return: 1 if lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
