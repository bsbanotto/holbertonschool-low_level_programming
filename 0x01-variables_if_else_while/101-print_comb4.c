#include <stdio.h>

/**
 * main - uses putchar to print numbers 0 thru 100 with norepeat characters
 * f - first digit
 * s - second digit
 * t - third digit
 *
 * Return: 0 if it works
 */

int main(void)
{
	int f;
	int s;
	int t;

	for (f = 0; f <= 7; f++)
	{
		for (s = f + 1; s <= 8; s++)
		{
			for (t = s + 1; t <= 9; t++)
			{
				putchar(f + '0');
				putchar(s + '0');
				putchar(t + '0');

			if (f == 7 && s == 8 && t == 9)
				break;

			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
