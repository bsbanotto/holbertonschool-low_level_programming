#include <stdio.h>

/**
 * main - contains if statements for required responses
 * a - lowercase alphabet character
 * b - uppercase alphabet character
 *
 * Return: 0 if it works
 */

int main(void)
{
	char a;
	char b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar (a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar (b);
	}
	putchar ('\n');

	return (0);
}
