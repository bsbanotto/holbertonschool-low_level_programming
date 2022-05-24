#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: 0 when successful
 */

void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');

	return;
}
