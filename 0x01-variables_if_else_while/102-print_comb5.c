#include <stdio.h>

/**
 * main - uses putchar to print numbers 0 thru 100 with norepeat characters
 * f - first number
 * s - second number
 * t - third number
 * l - fourth number
 *
 * Return: 0 if it works
 */

int main(void)
{
	int f;
	int s;

	for (f = 0; f <= 98; f++)
	{
		for (s = f + 1; s <= 99; s++)
		{
			putchar((f / 10) + '0');
			putchar((f % 10) + '0');
			putchar(' ');
			putchar((s / 10) + '0');
			putchar((s % 10) + '0');
			if (f < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
