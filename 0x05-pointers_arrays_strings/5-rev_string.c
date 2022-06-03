#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - Reverses a string
 * @s: provided string
 *
 * for loop in while statement, flips characters on either end of the string
 * Return: Void
 */

void rev_string(char *s)
{
	int i, len, tempStr;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tempStr = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tempStr;
	}
}
