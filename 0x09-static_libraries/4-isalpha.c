#include "main.h"

/**
 * _isalpha - returns 1 if any letter, 0 otherwise
 * @c: privided integer
 *
 * Return: 1 if any letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
