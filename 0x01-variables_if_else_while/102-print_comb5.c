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
	int t;
	int l;

	for (f = 0; f <= 5; f++)
	{
		for (s = 0; s <= 5; s++)
		{
			for (t = 0; t <= 5; t++)
			{
				for (l = 1; l <= 5; l++)
				{
					putchar(f + '0');
					putchar(s + '0');
					putchar(' ');
					putchar(t + '0');
					putchar(l + '0');

					if (f == 9 && s == 9 && t == 9 && l == 9)
						break;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
