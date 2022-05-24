#include "main.h"

/**
 * jack_bauer - prints every hour and minute for a day
 *
 * variable h is for hours
 * variable m is for minutes
 * counting with _putchar is terrible once you go past one digit
 * we have to think of it as divisors
 * example 53 is two digits, so it needs two _putchars
 * the first character is 53 / 10 - which is equal to 5 in integer division
 * the second character is 53 % 10 - which is equal to 3 in modulus division
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
