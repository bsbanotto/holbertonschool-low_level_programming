#include <stdio.h>

/**
 * main - uses putchar to print numbers 0 thru 100 with norepeat characters
 * f - first digit
 * s - second digit
 *
 * Return: 0 if it works
 */

/*
 * For the first character, I want to print 0 nine times, 1 eight times
 * 2 seven times and so on until I print 8 once and 9 no times
 * for the second character, I want to print 1 once, 2 twice, 3 three
 * times and so on until I print 9 nine times
 */

int main(void)
{
	int f;
	int s;

	for (f = 0; f <= 8; f++)
	{
		for (s = f + 1; s <= 9; s++)
		{
			putchar(f + '0');
			putchar(s + '0');

			if (f == 8 && s == 9)
				break;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
