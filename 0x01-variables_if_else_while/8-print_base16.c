#include <stdio.h>

/**
 * main - function to print all single digit base 16 characters
 * a - base16 character
 *
 * Return: 0 if it works
 */

int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar (a);
	}
	for (a = 'a'; a < 'g'; a++)
	{
		putchar (a);
	}
	putchar ('\n');

	return (0);
}
