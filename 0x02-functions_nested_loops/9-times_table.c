#include "main.h"

/**
 * times_table - prints out the 9's times table....hopefully
 *
 * variable n1 is the first operator
 * variable n2 is the second operator
 * p is the product
 *
 * counting with _putchar is terrible once you go past one digit
 * we have to think of it as divisors
 * example 53 is two digits, so it needs two _putchars
 * the first character is 53 / 10 - which is equal to 5 in integer division
 * the second character is 53 % 10 - which is equal to 3 in modulus division
 *
 * Return: void
 */
void times_table(void)
{
	int n1;
	int n2;
	int p;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			p = n1 * n2;
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
			_putchar(',');
			_putchar(' ');
			if (n2 == 9)
			{
				_putchar('\n');
			}
		}
	}
}
