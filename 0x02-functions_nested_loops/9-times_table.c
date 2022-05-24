#include "main.h"

/**
 * times_table - prints out the 9's times table....hopefully
 *
 * variable rownum is the row number
 * variable colnum is the column number
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
	int rownum;
	int colnum;
	int p;

	for (rownum = 0; rownum <= 9; rownum++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (colnum = 1; colnum <= 9; colnum++)
		{
			p = rownum * colnum;
			if ((p / 10) > 0)
			{
				_putchar((p / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((p % 10) + '0');

			if (colnum < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
