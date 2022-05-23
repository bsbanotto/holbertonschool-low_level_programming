#include <stdio.h>

/**
 * main - uses putchar to print numbers 0 thru 9
 * i - integer
 *
 * Return: 0 if it works
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i <= 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
