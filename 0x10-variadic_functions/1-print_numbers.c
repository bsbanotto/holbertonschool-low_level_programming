#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_numbers - prints given numbers followed by new line
 * @separator: String to separate each number
 * @n: defined quantity of integers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (n == 0)
		printf("\n");

	va_start(numbers, n);

	if (n > 0)
	{

		if (separator != NULL)
		{
			for (i = 0; i < (n - 1); i++)
			{
				printf("%d%s", va_arg(numbers, unsigned int), separator);
			}
			printf("%d", va_arg(numbers, unsigned int));
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				printf("%d", va_arg(numbers, unsigned int));
			}
		}
		printf("\n");

		va_end(numbers);
	}
}
