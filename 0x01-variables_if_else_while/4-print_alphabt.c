#include <stdio.h>

/**
 * main - Function to print lowercase except q and e
 * a - lowercase alphabet character
 *
 * Return: 0 if it works
 */

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
			a++;
		putchar (a);
		a++;
	}
	putchar ('\n');

	return (0);
}
