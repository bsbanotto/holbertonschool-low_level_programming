#include <stdio.h>

/**
 * main - function to print the alphabet backwards
 * a - alphabet character
 *
 * Return: 0 if it works
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar (a);
	}
	putchar ('\n');

	return (0);
}
