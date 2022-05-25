#include "main.h"
/**
 * print_times_table - prints out the times table....hopefully
 * @n: is the provided upper limit
 * Return: void
 */
void print_times_table(int n)
{
	int numone, numtwo, p;

	if (n < 15)
	{
		for (numone = 0; numone <= n; numone++)
		{
			for (numtwo = 0; numtwo <= n; numtwo++)
			{
				p = numone * numtwo;
				if (numtwo == 0)
					_putchar('0');
				else if (p < 100)
					{
					if ((p / 10) == 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar((p % 10) + '0');
					} else
					{
						_putchar(' ');
						_putchar((p / 10) + '0');
						_putchar((p % 10) + '0');
					}
				} else
				{
					_putchar((p / 100) + '0');
					_putchar(((p % 100) / 10) + '0');
					_putchar((p % 10) + '0');
				}
				if (numtwo < n)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (numtwo == n)
					_putchar('\n');
			}
		}
	}
}
