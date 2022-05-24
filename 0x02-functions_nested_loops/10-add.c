#include "main.h"

/**
 * add - adds two integers together
 *
 * @x: first integer
 * @y: second integer
 * Counting with _putchar is terrible once you go past one digit
 * we have to think of it as divisors
 * example 53 is two digits, so it needs two _putchars
 * the first character is 53 / 10 - which is equal to 5 in integer division
 * the second character is 53 % 10 - which is equal to 3 in modulus division
 *
 * Return: integer
 */
int add(int x, int y)
{
	int sum;

	sum = x + y;

	return (sum);
}
